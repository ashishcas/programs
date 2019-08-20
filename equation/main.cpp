#include <iostream>

using namespace std;

int main()
{
    float a[6];  // accepting 6 values without using loop
    cout << "ENTER the first value" << endl;
    cin>>a[0];
    cout << "ENTER the second value" << endl;
    cin>>a[1];
    cout << "ENTER the third value" << endl;
    cin>>a[2];
    cout << "ENTER the fourth value" << endl;
    cin>>a[3];
    cout << "ENTER the fifth value" << endl;
    cin>>a[4];
    cout << "ENTER the sixth value" << endl;
    cin>>a[5];

    cout<<"X is :"<<a[0]<<" Y is: "<<(9*a[0]*a[0]/5)-0.5*a[0]+2<<endl;
    cout<<"X is :"<<a[1]<<" Y is:"<<(9*a[1]*a[1]/5)-0.5*a[1]+2<<endl;
    cout<<"X is :"<<a[2]<<" Y is:"<<(9*a[2]*a[2]/5)-0.5*a[2]+2<<endl;
    cout<<"X is :"<<a[3]<<" Y is:"<<(9*a[3]*a[3]/5)-0.5*a[3]+2<<endl;
    cout<<"X is :"<<a[4]<<" Y is:"<<(9*a[4]*a[4]/5)-0.5*a[4]+2<<endl;
    cout<<"X is :"<<a[5]<<" Y is:"<<(9*a[5]*a[5]/5)-0.5*a[5]+2<<endl;

    return 0;
}
