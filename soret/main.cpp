#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a[1000];

	int n , m;
	cin>>n;
	while(n--)
	{
	    cin>>m;
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    if(m == 1)
	    {
	        cout<<a[0];
	    }
	    else
	    {
	        long long int sum1=0,sum2=0,j;

	       // cout<<c<<endl;

	        for(int i=0;j<m;j++)
	        {
	           for(int j=0;j<i;j++)
	           {
	               sum1 += a[j];
	           }
	           for(int k =i+1;k<m;k++)
	           {
	               sum2 += a[k];
	           }
            }

	        if(sum1 == sum2)
	            {
	                cout<<j+1;
	            }
	    }
	}//code
	return 0;
}
