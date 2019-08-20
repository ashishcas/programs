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

         ll a[n],sum = 0;

         for(ll i = 0;i<n;i++)
         {
             cin>>a[i];
             sum += a[i];
         }

         ll dp[n+1][sum+1] ;

         for(ll i =0 ;i<=n;i++)
         {
             dp[i][0] = true;
         }

          for(ll i =1 ;i<=sum;i++)
         {
             dp[0][i] = false;
         }


         for(ll i = 1 ;i<=n ;i++)
         {
             for(ll j = 1; j<= sum ; j++)
             {
                 dp[i][j] = dp[i-1][j];

                 if(a[i-1] <= j)
                 {
                     dp[i][j] = dp[i][j] || dp[i-1][j-a[i-1]];
                 }
             }
         }


         for(ll i = 1 ;i<=n ;i++)
         {
             for(ll j = 1; j<= sum ; j++)
             {
                cout<<dp[i][j]<<" ";
             }
             cout<<endl;
         }



          ll ans = INT_MAX;

          for(ll j = sum/2 ; j >= 0;j--)
          {
              if(dp[n][j])
              {
                  ans = min(ans,sum-2*j);
              }
          }

          cout<<ans<<endl;

     }
	return 0;
}
