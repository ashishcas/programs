#include <iostream>

using namespace std;

bool IsValid(int number)
{
    if(number >= 1 && number <= 10)
    {
        return true;
    }
    else
        return false;
}


int main()
{
    int choice;
    while(1)
    {
    cout << "Enter number between 1 and 10 : " << endl;
    cin>>choice;
    if(IsValid(choice))
    {
        cout<<"NUmber is between 1 and 10 : "<<choice<<endl;
         break;
    }
    else
      cout<<"Enter the value again"<<endl;
    }
    return 0;
}
