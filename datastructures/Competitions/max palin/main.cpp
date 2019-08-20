#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
using namespace std;

ll power(ll a ,ll b)
{
    ll ans ;
    if(b == 0)
        return 1;
    else if(b%2 == 0)
    {

        ans = power(a,b/2)%mod;
        return (ans*ans)%mod;
    }
    else
    {
        ans = power(a,b/2)%mod;

        return ((a*ans)%mod *(ans))%mod ;
    }

}

ll dp[100005][26];



int main()
{
    ll fact[100005],i,j;
    fact[0]=1;
    for(ll i =0;i<100005;i++)
    {
        fact[i]=i*fact[i-1]%mod;
    }
    string s;
    cin>>s;
    ll n;
    cin>>n;

    ll a[26] = {0};

    for(ll i =0;i<s.size();i++)
    {

        dp[i+1][s[i]-'a'] = 1;
    }

    for(ll i =1 ;i<s.size()+1;i++)
    {

        for(ll j =0;j<26;j++)
        {

            dp[i][j] += dp[i-1][j];
        }
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r,freq[26]={0};
        cin>>l>>r;

        for(ll i=0;i<26;i++)
        {

            freq[i] = dp[r][i]-dp[l-1][r];
        }
        ll ans = 0;
        ll flag = 0,n=0;
        for(ll i=0;i<26;i++)
        {
            if(freq[i]%2)
            {
                flag++;
            }
            n += freq[i]-freq[i]%2;
        }

        n /= 2;

        ans = fact[n];
       for(ll i=0;i<26;i++)
        {
            if(a[i])
            {
                ans=(ans*power(fact[(freq[i]-freq[i]%2)/2],mod-2))%mod;
            }
        }
        if(flag)
        {
            ans=(ans*flag)%mod;
        }
        cout<<ans<<endl;

    }

    return 0;
}
