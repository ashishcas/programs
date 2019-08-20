#include<bits/stdc++.h>


using namespace std;
int main()
 {
	int n;
	cin>>n;
	while(n--)
	{
	       int m;
	       cin>>m;
	       int a[1000];
	       for(int i=0;i<m;i++)
	           cin>>a[i];
	       a[m] =0;

	    int left=0,right=0,flag = 0;


	    for( int i=0;i<=m;i++)
	        {

	            if(a[i+1] > a[i])
	            {
	                right = i+1;
	            }
	          else  if(a[i+1]< a[i] )
	            {
	                if(right > left)
	                {
	                cout<<"("<<left<<" "<<right<<")"<<" ";
	                flag++;
	                }
	                left = i+1;
	            }
	           // cout<<left<<" "<<right;

	        }
	        if(flag == 0)
	        {
	            cout<<"No Profit";

	        }
	        cout<<endl;
	}
	return 0;
}
