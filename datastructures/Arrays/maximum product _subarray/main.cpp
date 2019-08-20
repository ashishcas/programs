#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];

	    for(ll i=0;i<n;i++)
	       {
	           cin>>a[i];
	       }

	     ll maxe = 1,mine = 1,ans = 1,one = 1;

	     for(ll i=0 ;i<n;i++)
	     {
	         if(a[i] > 0)
	         {
	             maxe = maxe*a[i];
	             mine = min(mine*a[i],one);
	         }
	         else if(a[i] == 0)
	         {
	             maxe = 1;
	             mine = 1;
	         }
	         else
	         {

	            ll temp = maxe;
	             maxe = max(mine*a[i],one);
                mine = temp*a[i];

	             cout<<" "<<mine<<" "<<maxe<<" "<<temp<<endl;

	         }
	         if(ans< maxe)
	         {
	         ans = maxe;
	         }


	         //cout<<" "<<mine<<" "<<maxe<<" "<<ans<<endl;
	         }


	    cout<<ans<<endl;
	}
	return 0;
}
