#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,i=0;
    a = rand() % 100 + 1;
     int b;
     cout<<a<<endl;
    while(1)
    {
    cout << "Guess the number" << endl;
    cin>>b;
    if(a==b)
    {
        cout<<"no of guesses :"<<i<<endl;
        cout<<"correct guess"<<endl;
    break;
    }
    i++;
    }
    return 0;
}
