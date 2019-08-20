#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i=1;
    srand(time(0)); // srand is used to genearate different random number everytime when program runs
     a = 1+rand()%9;  // to produce random number between 1 and 10
     //cout<<a;

    while(1)      // while loop is used to take input infinite times
    {
        cout << "Guess a number 1-10: ";
        cin>>b;
        if(b == a)
        {
            cout<<"BINGO you guessed the number in "<<i<<" tries"<<endl;
            break;
        }
        if(b>a)
        {
            cout<<"The secret number is smaller than "<<b<<endl;;
            cout<<endl;
        }
        if(b<a)
        {
            cout<<"The secret number is greater than "<<b<<endl;
            cout<<endl;
        }
        i++;
    }
    return 0;
}
