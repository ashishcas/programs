#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{

    string s,t,k;
    ll n;
    cin>>s;
    cin>>n;

    vector<string> vs;


    for(ll i = s.length();i>=0;i--)
    {
        t += s[i];

        k = t;
        reverse(k.begin(),k.end());

       vs.push_back(k);
    }

    sort(vs.begin(),vs.end());

    cout<<vs[n]<<endl;


    return 0;

}
