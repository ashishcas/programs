#include <bits/stdc++.h>
using namespace std;
    int a[1000];

void print(int a[],int i)
{
        if(i==0)
            cout<<a[0];


        sort(a,a+i);
        if(i%2 == 0)
        {
            cout<<(a[i/2]+a[i+1/2])/2<<endl;
        }
        else
        {
            cout<<a[i+1]/2<<endl;
        }
}

int main() {

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
      for(int i=0;i<n;i++)
    {
        cin>>a[i];
        print(a,i);

    }
	//code
	return 0;
}
