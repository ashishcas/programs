#include<iostream>


using namespace std;

int main()
{
    int Numberone,NumberTwo,operation,Result,init;
    string FirstName[20];
    cout <<"Welcome to the Calculation Program"<<endl;
    cout<<"Please enter your First Name"<<endl;
    cin>>FirstName;

    do{
        cout<<"Enter number of iterations"<<endl;
        cin>>init;
        if(operation < 0 || operation > 3)
        {
            cout<<"invalid iteration"<<endl;
        }
        if(init == 0)
        {
            cout<<"Exit the loop"<<endl;
            break;
        }
    }while(1)

    for(int i=0;i<operation ;i++)
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
      if(operation < 0 || operation > 6)
      {
          cout<<"invalid operation"<<endl;
          i = i-1;
      }

    }

    double Numberone,NumberTwo,Result;
    while(1)
    {
         cout<<"Please enter two integers"<<endl;
        cin>>Numberone>>NumberTwo;
        cout<<"enter the operation"<<endl;
        cout<<"(1)add"<<endl;
        cout<<"(2)subtract"<<endl;
        cout<<"(3)multiply"<<endl;
        cout<<"(4)divide"<<endl;
        cout<<"(5)remainder"<<endl;
        cout<<"(0)exit"<<endl;
        cin>>operation;
        if(operation < 0 || operation > 5)
      {
          cout<<"invalid operation"<<endl;
          i = i-1;
      }
      switch(operation)
      {
          case 1:  Result = Numberone+NumberTwo;
          case 2:   Result = Numberone-NumberTwo;
        case 3:  Result = Numberone*NumberTwo;
        case 4:   Result = Numberone/NumberTwo;
        case 0 :Numberone%NumberTwo<<endl;
      }

      if(operation == 0 )
          break;

        cout<<FirstName<<"Thank you for using the program written by";
    }

    return 0;
}
