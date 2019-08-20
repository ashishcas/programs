#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int first(int N0,int Q,int n)
{
    return(N0*(pow(Q,n)));
}
int second(int N0,int t,int d)
{
    return(N0*(pow(2,(t/d))));
}
int main()
{
    int N0,Q,n,t,d;
    while(true)
    {
    cout << "Enter N0  Q n" << endl;
    cin>>N0>>Q>>n;
    cout<<"Enter N0 time t rate of doubling d "<<endl;
    cin>>t>>d;
    if(cin.fail())
    {
        cin.clear();
        cin.ignore();
        //cout<<"enter the values again "<<endl;
    }
    else
    {
        cout<<"Nn is : "<<first(N0,Q,n)<<endl;
        cout<<"Nt is : "<<second(N0,t,d)<<endl;
    }
    }
    return 0;
}
