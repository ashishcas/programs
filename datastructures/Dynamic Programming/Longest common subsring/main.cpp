#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {

    string s1,s2,s3;
    cin>>s1>>s2;


    ll m = s1.length();
    ll n = s2.length();
   ll dp[m+1][n+1];

   // cout<<s1<<" "<<s2<<" "<<m<<' '<<n<<endl;

    ll ans = 0;

    for(ll i = 0 ;i<=m;i++)
    {
        for(ll j = 0 ;j<=n;j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if(s1[i-1] == s2[j-1])
            {
                // cout<<"bb"<<endl;
                dp[i][j] = dp[i-1][j-1]+1;
                s3 += s1[i-1];
            }
            else
            {
                //cout<<"cc"<<endl;
                dp[i][j] = 0;

            }

         ans = max(ans,dp[i][j]);
         //cout<<dp[i][j]<<' ';
        }
       // cout<<endl;
    }

   // cout<<s3<<endl;
    cout<<s1.substr(s1.length()-ans,ans)<<endl;
   cout<<ans<<endl;
}

    return 0;
}
