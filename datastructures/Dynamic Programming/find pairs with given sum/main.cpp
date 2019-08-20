#include<bits/stdc++.h>




#define ll long long
#define pb push_back
#define sti set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;
int main()
 {
	 ll t;
	 cin>>t;

	 while(t--)
	 {
	     ll m,n,x;
	     cin>>m>>n>>x;
	    ll a[m];
	    ll b[n];

	    for(ll i = 0;i<m;i++)
	    {
	        cin>>a[i];
	    }

	    set<ll> st;

	    for(ll i =0;i<n;i++)
	    {
	        cin>>b[i];
	        st.insert(b[i]);
	    }

	    vector< pair < ll , ll > > vi;

	    for(ll i =0;i<m;i++)
	    {
	         if(st.find(x-a[i]) != st.end())
	         {
	             cout<<x-a[i]<<" "<<a[i]<<"   insert"<<endl;
	             	             vi.pb(make_pair(a[i],x-a[i]));
	         }
	    }

	   sort(vi.begin(),vi.end());

	    vector< pair < ll , ll > > :: iterator it;


	    for(int i = 0;i < vi.size();i++)
	    {
	        if(i <vi.size()-1)
	         cout<<vi[i].first<<" "<<vi[i].second<<", ";
	         else
	            cout<<vi[i].first<<" "<<vi[i].second;
	    }

	    cout<<endl;
	 }
	return 0;
}
