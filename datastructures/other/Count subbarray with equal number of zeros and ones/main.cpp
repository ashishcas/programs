#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{

    ll n;
    cin>>n;

    ll a[n];

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }



    map < ll , ll > um ;

       ll sum = 0;



       for(ll i=0;i<n;i++)
       {

           if(a[i] == 0)
           {

             sum += -1;
           }
           else
           {

               sum += a[i];
           }


         um[sum]++;


       }


       ll ans = 0;
      map< ll , ll > :: iterator it;

       for(it  = um.begin();it != um.end();it++)
       {

           if(it->second > 1)
           {
               ans += ((it->second)*(it->second-1))/2 ;

           }
       }


       if (um.find(0) != um.end())
       {

           ans += um[0];
       }


    cout << ans << endl;
    return 0;
}
