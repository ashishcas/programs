#include <bits/stdc++.h>

#define mod 10000000007
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll arr;

        ll  sum = 0;
        for(ll i = a;i<b;i++)
        {
            arr = (((i+1%mod)*(i+1%mod))%mod-(i%mod*i%mod)%mod)%mod;
              sum += ((arr%mod)*(arr%mod))%mod;

        }
        cout<<sum<<endl;
    }
    return 0;
}
