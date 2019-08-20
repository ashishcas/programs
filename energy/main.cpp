#include <bits/stdc++.h>

using namespace std;

const double h = 6.626176e-34;
int main()
{
    double wavelength;
    while(1)
    {
    cout<<"Enter wavelength"<<endl;
    cin>>wavelength;
    if(wavelength >10 && wavelength < pow(10,-20))
    {
        cout<<"out of range"<<endl;
    }
    else
   {
         double v = pow(10,8)/wavelength;
         double e = v*h;
         cout<<wavelength<<" meters corresponds to "<<v<<" and has an energy of "<<e<<" joules"<<endl;
         break;
   }
}
    cout << " " << endl;
    return 0;
}
