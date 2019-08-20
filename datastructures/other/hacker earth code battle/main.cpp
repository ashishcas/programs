#include<bits/stdc++.h>


#define ll long long
using namespace std;


bool check(ll n)
{

    set<ll> um;

    for(ll i = 0;(i*i)<=n;++i)
    {

      cout<<i*i<<" ";
       um.insert(i);


       cout<<sqrt(n-(i*i))<<endl;
        if(um.find(sqrt(n-(i*i))) != um.end())
        {
            cout<<"enter"<<i*i<<" ";
          return true;

        }

    }
return false;

}




int main()
{

    ll n;
    cin>>n;

    if(check(n))
    {

        cout<<"yes"<<endl;
    }
    else
    {

        cout<<"no:"<<endl;
    }
}
