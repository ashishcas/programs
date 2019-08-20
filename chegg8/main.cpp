#include <iostream>

using namespace std;

void fun(int a[])
{
    int *c,*d,*e,f;
        cout<<"entering ward_clever"<<endl;
       c = a+2;
       d = a+5;
       f=0;
       for(e = d ;e>=c;e--)
       {
           f = f+ *e;
           cout<<*e<<" "<<f<<endl;
           *e = f;
       }
       cout<<"leaving ward_cleaver"<<endl;
}
int main()
{
    int a[6],b;
    b =0;
    for(int i=0;i<6;i++)
    {
        a[i] = i*3-1;
        b = b+a[i];
        cout<<i<<" "<<a[i]<<" "<<b<<endl;
    }
    fun(a);

    cout << "back from ward_cleaver , beaver_cleaver" << endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
