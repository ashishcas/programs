#include <iostream>

using namespace std;

int main()
{
    int n,a[100],b=0;
    cout << "enter value" << endl;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
     int j=n-1;
     int i=0;
     while(i<j)
     {
         if(a[i] = a[j])
         {
             b++;
         }
         i++;
         j--;
     }
     cout<<b;
    return 0;
}
