#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define st set<int>

using namespace std;

int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll m,n,b;
	    cin>>m;
	    vector<ll> vi;

	     unordered_set <ll> us;

	    for(ll i=0;i<m;i++)
	    {
	        cin>>b;
	        vi.pb(b);
	    }

	    unordered_map<ll,ll> index;

	    ll faults = 0;

	   for(ll i=0;i<m;i++)
	   {
	       if(us.size() < n)
	       {
	           if(us.find(vi[i]) == us.end())
	           {
	               us.insert(vi[i]);
	               faults++;

	           }
	           index[vi[i]] = i;
	             cout<<vi[i]<<" "<<faults<<" " <<index[vi[i]]<<endl;
	       }
	       else
	       {
	           if(us.find(vi[i]) == us.end())
	           {
	               ll lru = INT_MAX,val;
	                unordered_set<ll> ::iterator it;
	               for(it = us.begin();it != us.end();it++)
	               {
	                   if(index[*it] < lru)
	                   {
	                       lru = index[*it];
	                       val = *it;
	                   }
	               }

	               cout<<val<<" val - "<<vi[i]<<" "<<lru<<endl;
	               us.erase(val);
	               us.insert(vi[i]);
	               faults++;
	           }
	           index[vi[i]] = i;

	           	 cout<<vi[i]<<" "<<faults<<" " <<index[vi[i]]<<endl;

	       }
	   }

	   us.clear();
	   index.clear();
	   cout<<faults<<endl;

	}
	return 0;
}
