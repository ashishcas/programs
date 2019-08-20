#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    long long int a[10000];
    cin>>n;
    while(n--)
    {
        int sum,ans,start = 0,e,s=0;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];

        }
         sum = 0;
         ans = INT_MIN;
        for(int i=0;i<m;i++)
        {
            sum += a[i];

            if(ans < sum)
            {
              ans = sum;
              start =  s;
              e = i;

            }
            if(sum <= 0)
            {
                sum = 0;
                s = i+1;
            }

        }
        cout<<ans<<endl;
        for(int i = start ;i<=e;i++)
        {
            cout<<a[i]<<" ";
        }

    }
	//code
	return 0;
}
