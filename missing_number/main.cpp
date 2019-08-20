#include <bits/stdc++.h>
using namespace std;

int main() {
long long int a[1000];
int n;
  cin>>n;
  while(n--)
 {
     int m;
     cin>>m;
     for(int i=0;i<m-1;i++)
     {
         cin>>a[i];
     }
      for(int i=0;i<m-2;i++)
      {
          int d=abs(a[0]-a[1]);
          if(a[i+1]==a[i]+d)
          {
              continue;
          }
          else if(a[i+1] != a[i]+d)
          {
              cout<<a[i]+d<<endl;


          }

      }
 }
	return 0;
}
