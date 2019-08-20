#include <iostream>
using namespace std;



int main() {
int n;
long long int f[100000];
cin>>n;
while(n--)
{
    int m;
    f[0] =0;
    f[1]=1;
 cin>>m;
 if(m==0)
 {
     cout<<f[0];
 }
 else if(m==1)
 {
     cout<<f[1];
 }
 else
 {
  for (int i = 2; i <= m; i++)
  {
     f[i] = f[i-1] + f[i-2];
  }
  cout<<f[m]<<endl;//code
}
}
	return 0;
}
