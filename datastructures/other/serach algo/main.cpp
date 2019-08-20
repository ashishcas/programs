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

        ll a[n];

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll tb;
        cin>>tb;

        sort(a,a+n);
        while(tb--)
        {
            ll a,k;
            cin>>a>>k;
            ll ans;


            for(ll i= 0;i<n;i++)
               {
                   if(a[i] > k)
                   {
                       ans = n-i;
                       break;
                   }
               }

            if(a == 0)
            {
               cout<<ans<<endl;
            }
            else if(a == 1)
            {
                cout<<ans+1<<endl;
            }
        }

    }


}
