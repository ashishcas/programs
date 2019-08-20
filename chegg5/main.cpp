#include <bits/stdc++.h>
using namespace std;
//recursive function power is caluculated until the exponent value becomes zero
long double recursive(long double a,long double b)
{
    if(b<=0)
        return 1;
    else
        return a * recursive(a,--b);
}
// iterative way is to run for loop till exponent times
long double iterative(long double base,long double exponent)
{
   long double c = base;
   if(exponent == 0)
      return 1;
    for(int i=0;i<exponent-1;i++)
    {
        base = base*c;
      //  cout<<base<<endl;
    }
    return base;
}
int main()
{
    long double base,exponent;
    cout<<"Enter the base"<<endl;
    cin>>base;
    cout<<"Enter exponent"<<endl;
    cin>>exponent;
    cout<<"----Calling recursive function----"<<endl;
    cout<<recursive(base,exponent)<<endl;
    cout<<"----Calling iterative function----"<<endl;
    cout<<iterative(base,exponent)<<endl;
    return 0;

}


