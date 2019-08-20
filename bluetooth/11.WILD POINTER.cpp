//WILD POINTER:unintialized
#include<conio.h>
#include<iostream.h>
int main()
{
    int *x; //DECLARED THE VARIABLE BUT NOT INTIALIZED
    for(int k=0;k<10;k++)
    cout<<x[k]<<" ";
    getch();
    return 0;
}
