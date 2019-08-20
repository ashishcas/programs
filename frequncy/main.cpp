#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000],n;
    char b[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[a[i]++];
    }
    for(int j=0;j<b.length();j++)
    {
        cout << b[j] << endl;
    }return 0;
}
