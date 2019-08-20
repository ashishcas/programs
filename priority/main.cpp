#include <bits/stdc++.h>

using namespace std;


int main()
{

    int array[20];

    for(int i=0;i<20;i++)
    {
        cout<<"enter value between 10 and 100"<<endl;
        cin>>array[i];
    }
    sort(array,array+20);//sorting the array
    for(int i=0;i<20;i++)
    {
        // Move the index ahead while there are duplicates
       while (i < 20 && array[i] == array[i+1])
          i++;

       // print last occurrence of the current element
    cout<<"printing unique values "<<array[i]<<endl;
    }
return 0;
}

