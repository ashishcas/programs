#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[1000],n,m,ans;
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
         ans= -1;
            for(int j=i+1;j<m;j++)
            {
                if(a[j]>a[i])
                {
                    ans = a[j];
                    break;
                }
            }
            cout<<ans<<" ";
        }
    }
	//code
	return 0;
}
