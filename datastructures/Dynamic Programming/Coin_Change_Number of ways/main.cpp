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
	    ll m,n;
	    cin>>m;

	    ll coins[m+1];
	    for(ll i=0;i<m;i++)
	    {
	        cin>>coins[i];
	    }
	    cin>>n;

	    ll dp[n+1];
	     memset(dp, 0, sizeof(dp));

	    dp[0] = 1;

	    for(ll i=0;i<m;i++)
	    {
	        for(ll j = 1;j<=n;j++)
	        {
	            if(j >= coins[i])
	            {
	                dp[j] += dp[j-coins[i]];
	            }
	            cout<<dp[j]<<" "<<j<<" - ";
	        }
	        cout<<endl;
	    }

	    cout<<dp[n]<<endl;
	}
	return 0;
}
