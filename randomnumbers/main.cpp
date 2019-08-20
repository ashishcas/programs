#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size,maxn,avg = 0;
    int array[100];
    cout << "Enter the number of numbers to be generated" << endl;
    cin>>size;
    cout << "Enter the maximum number" << endl;
    cin>>maxn;
    srand(NULL);
    for(int i=0;i<size;i++)
    {
        array[i] = rand()%maxn ;
        avg += array[i];
    }
    cout<<"the maxmimum number is : "<<maxn<<endl;
    cout<<"the random numbers are"<<endl;
      for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"the average is "<<avg/size;

    return 0;
}
