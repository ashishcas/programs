#include <iostream>

using namespace std;

int main()
{
    int Numberone,NumberTwo,operation,init;
    char FirstName[20];
    cout <<"Welcome to the Calculation Program"<<endl;
    cout<<"Please enter your First Name"<<endl;
     cin>>FirstName;


    do{
        cout<<"Enter number of iterations"<<endl;
        cin>>init;
        if(init < 0 || init > 3)
        {
            cout<<"invalid iteration"<<endl;
        }
        if(init == 0)
         break;
         for(int i=0;i<init ;i++)
    {
        cout<<"Please enter two integers"<<endl;
        cin>>Numberone>>NumberTwo;
        cout<<"enter the operation"<<endl;
        cout<<"(1)add"<<endl;
        cout<<"(2)subtract"<<endl;
        cout<<"(3)multiply"<<endl;
        cout<<"(4)divide"<<endl;
        cout<<"(5)remainder"<<endl;
        cout<<"(6)no operations"<<endl;
        cin>>operation;

        if(operation == 6)
        {
            break;
        }
         if(operation < 0 || operation > 6)
      {
          cout<<"invalid operation"<<endl;
          i = i-1;
      }
        if(operation == 1)
            cout<<Numberone+NumberTwo<<endl;
        if(operation == 2)
             cout<<Numberone-NumberTwo<<endl;
        if(operation == 3)
            cout<<Numberone*NumberTwo<<endl;
        if(operation == 4)
            cout<<Numberone/NumberTwo<<endl;
        if(operation == 5)
            cout<<Numberone%NumberTwo<<endl;
        if(operation == 6)
            cout<<"No operation"<<endl;


    }

    }while(1);



    double NumberOne,Numbertwo,Result;
    while(1)
    {
         cout<<"Please enter two integers"<<endl;
        cin>>NumberOne>>Numbertwo;
        cout<<"enter the operation"<<endl;
        cout<<"(1)add"<<endl;
        cout<<"(2)subtract"<<endl;
        cout<<"(3)multiply"<<endl;
        cout<<"(4)divide"<<endl;
        cout<<"(5)no more operations"<<endl;

        cin>>operation;
        if(operation < 0 || operation > 5)
      {
          cout<<"invalid operation"<<endl;
         // i = i-1;
      }
       if(operation == 5)
          break;
      switch(operation)
      {
          case 1:  Result = NumberOne+Numbertwo;
          case 2:   Result = NumberOne-Numbertwo;
        case 3:  Result = NumberOne*Numbertwo;
        case 4:   Result = NumberOne/Numbertwo;

      }
      cout<<Result<<endl;



        cout<<FirstName<<"Thank you for using the program written by";
    }

    return 0;
}
