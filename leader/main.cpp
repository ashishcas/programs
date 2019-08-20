#include<bits/stdc++.h>


#define lli long long int


using namespace std;
int main()
 {
	int m,n;
	int a[1000];
	cin>>n;
	while(n--)
	{
	    cin>>m;
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	     // bool c = false;
	      int mx;
	    //int i;
	    for(int i=0;i<m-1;i++)
	    {
	        mx = INT_MIN;
	        for(int j=i+1;j<m;j++)
	        {
	           mx = max(mx,a[j]);

	        }
	         if(a[i] > mx)
	         cout<<a[i]<<" ";
	    }
	    cout<<a[m-1];
	    cout<<endl;

	}
	return 0;
}
