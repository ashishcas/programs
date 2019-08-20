#include <iostream>
#include<iomanip>

using namespace std;

int main()
{

    for(int i=0;i<2;i++) // using for loop to take input 2 times
    {
            char a;//  // declaring the float variable to store gallons
                      //declaring character variable to store milk type
     float n = 0.000;
    float tcost=0.0000,cost = 0.0000;
    string m;
    cout << "Enter the number of gallons" << endl;
    cin>>n;
    cout<<"enter the type of milk codes"<<endl;
    cin>>a;
    if(a == 'w')
    {
        m = "whole";
        cost = 4.000;       // cost is used to store cost per gallon and total cost
        tcost = n*4.000;

    }
    else if(a == 't')
    {
       m = " 2%";
        tcost = n*3.50000;
        cost = 3.50000;
    }
    else if(a == 's')
    {
        m = "Skim";
        tcost = n*3.0000;
        cost = 3.0000;
    }
    cout<<"MILK-CODE "<<"MILK-TYPE "<<" "<<"Cost per gallon "<<"total-cost"<<endl;
    cout<<a<<"          "<<m<<"         $";
    cout<<fixed<<setprecision(2)<<cost<<"     $";
    cout<<fixed<<setprecision(2)<<tcost<<endl;  // set precision is used to print two decimal places
    }
    return 0;
}

