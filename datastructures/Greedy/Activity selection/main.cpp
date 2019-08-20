#include<bits/stdc++.h>


#define ll long long


using namespace std;
int main()
 {
	int t;
	cin>>t;

	while(t--)
	{
	    ll n,ans =1,b;
	    cin>>n;
	    vector <ll> vi,vf;

	    for(ll i=0;i<n;i++)
	    {
	        cin>>b;
	        vi.push_back(b);
	    }

	    for(ll i=0;i<n;i++)
	    {
	        cin>>b;
	        vf.push_back(b);
	    }


	    vector< pair < ll, ll > > p;

	     for(ll i=0;i<n;i++)
	    {
	        p.push_back(make_pair(vf[i],vi[i]));
	    }

	    sort(p.begin(),p.end());

          for(int i=0;i<n;i++)
	    {
	        cout<<p[i].first<<" "<<p[i].second<<endl;
	    }


         ll i=0;

         for(ll j =1;j<n;j++)
         {
             if(p[j].second >= p[i].first)
             {
                 ans++;
                 i = j;

             }

         }

	    cout<<ans<<endl;



	}
	return 0;
}
