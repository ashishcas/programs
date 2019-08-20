#include<bits/stdc++.h>

using namespace std;

class Date
{
public:
    int day,year;
    float month;
    void display(int month,int day,int year)
    {
        cout<<month<<"/"<<day<<"/"<<year;
    }
};

int main()
{
    Date d;  // cretaing object of class Date
   try{
       cout<<"enter day"<<endl;
       cin>>d.day;
       cout<<"Enter month"<<endl;
       cin>>d.month;
       cout<<"enter year"<<endl;
       cin>>d.year;
       if(d.day>31 || d.day <1)
       {
           throw d.day;
       }
       if(d.month >12 || d.month < 1)
       {
           throw d.month;
       }
       else
       {
           d.display(d.month,d.day,d.year);
       }
   }
   catch(int x)
   {

       cout<<"exception in day"<<endl;
   }
   catch(float y)
   {
       cout<<"exception in month"<<endl;
   }
    return 0;
}
