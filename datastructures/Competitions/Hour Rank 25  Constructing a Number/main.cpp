#include <bits/stdc++.h>

#define ll long long

using namespace std;

string canConstruct(vector <ll> a) {

    ll sum = 0;
    for(ll i=0;i<a.size();i++)
    {
        ll num = a[i];
        if(num >10 && num%10 == 0)
        {
            num = num/10;
        }
        sum += num;
    }
    if(sum%3 == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector <long long > s(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> s[a_i];

        }
        string result = canConstruct(s);
        cout << result << endl;
    }
    return 0;
}
