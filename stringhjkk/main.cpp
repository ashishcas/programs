#include <bits/stdc++.h>

using namespace std;

int array[3],b,c,d;
//string arrayofstrings[10]; // creating array of strings
void enter(int *array)
{
    int i;
    for(i=0;i<3;i++)
    {
        cin>>array[i];
       // cout<<array[i];
    }

}
int main()
{
    int k[3];
    enter(k);
     b = 25+(rand()%49-25+1) ;
     cout<<b<<endl;
    int array2[b];
    int i=0;
    while( i<b)
    {
        array2[i] = 5+(rand()%10-5+1);
       // cout<<array2[i]<<" ";
        i++;
        array2[i] = -10+(5+(rand()%10-5+1));
       // cout<<array2[i]<<endl;
        i++;
    }
    sort(array2,array2+b);
    array[0] = b;
    cout<<"maximum element"<<endl;
    array[1] = array2[b-1];
    cout<<"minimum element"<<endl;
    array[2] = array2[0];
    for(i=0;i<3;i++)
    {
        //cin>>array[i];
        cout<<array[i]<<" ";
    }
    return 0;
}
