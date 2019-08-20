#include<bits/stdc++.h>


#define ll long long


using namespace std;


int main()
 {
     ll t;
     cin>>t;

     while(t--)
     {
         ll n;
         cin>>n;
         ll a[n][n];

         for(ll i= 0;i<n;i++)
         {
           for(ll j = 0;j<n;j++)
           {
             cin>>a[i][j];
           }
         }

         ll dp[n][n];

         dp[0][0] = a[0][0];

         for(ll i =1 ;i<n;i++)
         {
             dp[i][1] = dp[i-1][0]+a[i][0];
         }

         for(ll j =0;j<n;j++)
         {
            dp[0][j] = dp[0][j-1]+a[0][j];
         }

         for(ll i =1 ;i<n;i++)
         {
             for(ll j = 1;j<n;j++)
             {
                 dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+a[i][j];
             }
         }
 for(ll i =0 ;i<n;i++)
         {
             for(ll j = 0;j<n;j++)
             {
                 cout<<dp[i][j]<<" ";
             }
             cout<<endl;
         }
        cout<<dp[n-1][n-1]<<endl;
     }

	return 0;
}
