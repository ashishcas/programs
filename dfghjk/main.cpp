#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   long long  int a,t,tem,count =0;
cin>>t;
for(int i=0;i<t;i++){
cin>>a;
tem = a;
while(tem>0)
{
long long int p = tem%10;
tem = tem/10;
if((a%p) == 0 && p!=0)
{
count++;
    //cout<<count;
}
}

cout<<count<<endl;
}
    return 0;
}
