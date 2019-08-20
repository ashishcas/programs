#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{

    ll n;
    cin>>n;

    ll max = INT_MIN;
     string t;
    map<string,ll> mp;

    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;

        if(mp.find(s) == mp.end())
        {
            mp[s] = 1;
        }
        else
        {
          mp[s]++;
        }

        if(mp[s] >= max)
        {
            max = mp[s];
            t = s;
        }
    }

    cout<<t<<endl;

    return 0;
}
