#include <iostream>
using namespace std;

int main() {
	int n;
	long long int m,a[1000];
	cin>>n;
	while(n--)
	{

	    cin>>m;
	    if(m>=3)
	   { for(long long int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    for(long long int i=0;i<m-1;i++)
	    {
	      if(a[i-1]<=a[i] && a[i]<=a[i+1])
	    {
	        cout<<a[i];
	        break;
	    }
	    else if(i== m-2)
	    {
	       cout<<-1;
	    }
	    }
	}//code
	}
	return 0;
}
