#include <iostream>

using namespace std;
int a[3];
bool ascend();
void print();

int main()
{
    cout << "Enter the three values" << endl;
   bool b = ascend();
    if(b)
    {
         cout<<"they are in ascending order"<<endl;
    }
    else
    {

     cout<<"not in ascending order"<<endl;
    }
    print();
    return 0;
}
bool ascend()
{
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    if(a[0]<a[1] && a[1]<a[2])
    {
       return true;
    }
    else
        return false;
}

 void print()
 {
     cout<<"the values enterted are"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<" "<<a[i]<<endl;
    }
 }
