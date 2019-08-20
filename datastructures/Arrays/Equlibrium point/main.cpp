#include <bits/stdc++.h>

using namespace std;

int find(vector< int > a)
{


    for(int i =0; i<a.size();i++)
    {
       int l =0,r=0;

        for(int k = 0;k<i;k++)
        {
            l += a[k];
        }

        for(int j = i+1;j<a.size();j++)
        {
            r += a[j];
        }
       // cout<<l<<" "<<r<<" ";
        if(l == r)
            return i+1;

    }
    return -1;
}





int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        cout<<find(a)<<endl;
    }
    return 0;
}
