#include <bits/stdc++.h>

using namespace std;
int b;
void egypt(int n,int d)
{
    if(d== 0 || n== 0)
    {
      return;
    }

    if(d%n == 0)
    {
        cout<<"1/"<<d/n;
         return;
    }
    if(n%d == 0)
    {
        cout<<n/d;
        return;
    }
    if(n>d)
    {
        cout<<n/d<<" + ";
        egypt(n%d,d);
        return;

    }
   // if(d>n)

    b = (d/n)+1;
    cout<<"1/"<<b<<" + ";
    egypt(n*b-d,d*b);
}

int main()
{
     int n,d;
       cin>>n>>d;
     egypt(n,d);
    return 0;
}
