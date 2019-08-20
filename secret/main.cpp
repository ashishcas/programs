#include <iostream>

using namespace std;

int main()
{
    int number,secretnumber;
    secretnumber = 5;
    while(1) // to run loop infinite times
    {
        cout << "Guess Number Between 1 and 10" << endl;
        cin>>number;
        if(number==secretnumber)
        {
            cout<<"that ’ s correct!"<<endl;
            break;
        }
        else
            cout<<"sorry, guess again"<<endl;
    }

    return 0;
}
