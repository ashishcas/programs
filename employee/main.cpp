#include <iostream>

using namespace std;

int main()
{
   long long int empid[7]; // intializing the empid s
   empid[0] = 565884;
   empid[1] = 4520125;
   empid[2] = 7895122;
   empid[3] = 8777541;
   empid[4] = 8451277;
   empid[5] = 1302850;
   empid[6] = 75804489;
    double  hours[7];
    double payrate[7];
    double wages[7];    //enter data
     for(int i=0;i<7;i++)
     {
         cout<<"enter hours and payrate for: "<<empid[i]<<endl;
         cin>>hours[i]>>payrate[i];
         if( hours[i]<0 )
         {
             cout<<"error"<<endl;
             return 0;
         }
         else if(payrate[i]<15)
         {
             return 0;
         }
         wages[i] = hours[i]*payrate[i]; //caluculating ages

     }
         cout << "empid" <<"-----"<<"wages"<< endl;
          for(int i=0;i<7;i++)
          {
             cout << empid[i] <<"-----"<<wages[i]<< endl;
          }
    return 0;
}
