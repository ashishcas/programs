#include <iostream>
using namespace std;

void sprint_ascii(char a[],int start,int end,int newline)
{
    int i=0;
    for(int j=start;j<end;j++)
    {
        a[i] = (char)j;
        i++;
    }
    for(int k = 0 ;k<i;k++)
    {
        cout<<a[k]<<" ";
        if(k == newline || k%newline == 0)
        {
            cout<<endl;
        }
    }
}


int main()
{
	char array[1000];
	int n;
	int c,d;
	cout<<"enter the starting and ending of ascii values"<<endl;
	cin>>c>>d;

	cout<<"enter the newline number"<<endl;
	cin>>n;
	sprint_ascii(array,c,d,n);
	return 0;
}
