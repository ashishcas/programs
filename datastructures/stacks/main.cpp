#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++)
        if(__gcd(i,j) == 1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
