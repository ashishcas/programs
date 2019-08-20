#include <iostream>

using namespace std;


int main()
{
    int intsize;
    cout << "enter size of array" << endl;
    cin>>intsize;
    int array[intsize];
    for(int i=0;i<intsize;i++)
    {
        cin>>array[i];
    }
    int flag;
    for(int j=0;j<intsize-1;j++)
    {
        if(array[j+1]>array[j])
        {
            flag=1;
        }
        else if(array[j+1]<array[j])
        {
           flag =0;
           break;
        }
    }
    if(flag==1)
    {
        cout<<"ascending"<<endl;
    }
    else
    {
        cout<<"not ascending"<<endl;
    }
    return 0;
}
