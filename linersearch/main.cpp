#include <iostream>

using namespace std;


int Lsearch(int a[],int l,int m,int s);


int main()
{
    int a[10],s;
    cout << "Enter the ten values" << endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value to search : ";
    cin>>s;
    int l =0,m = 10;
    int b = Lsearch(a,l,m-1,s);
    if(b == -1)
        cout<<" not found it in array"<<endl;
    else
        cout<<"found at "<<b<<endl;
    return 0;
}

int Lsearch(int a[],int l ,int m,int s)
{
    if(l>m)
         return -1;

    if( a[l] == s)
          return l;
    else
        return Lsearch(a,l+1,m,s);

}
