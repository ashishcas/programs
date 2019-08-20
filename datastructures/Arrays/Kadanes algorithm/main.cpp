/*

Given an array containing both negative and positive integers. Find the contiguous sub-array with maximum sum.

Input
2
3
1 2 3
4
-1 -2 -3 -4
Output
6
-1


*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    long long int a[10000];
    cin>>n;
    while(n--)
    {
        int b,c;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];

        }
        b= a[0];
        c = a[0];
        for(int i=1;i<m;i++)
        {
            b = max(a[i],b+a[i]);
            c = max(c,b);
        }
        cout<<c<<endl;

    }
	//code
	return 0;
}
