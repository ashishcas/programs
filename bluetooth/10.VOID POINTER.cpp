//PROGRAM TO DEMONSTRATE THE USE OF VOID POINTER
//VOID POINTER
#include<stdio.h>
#include<conio.h>
int main()
{
     void *p;
    int a=7;
    float b=12.5;
    p=&a;
    printf("\naddress of a %d",p); //ASSIGNING A POINTER   printf("the value to which p is pointing %U",*p);   //DEREFERENCINF THE VOID POINTER GENERATES THE ERROR
  printf("\nvalue in a= %d",*((int *)p));//explicit casting to get value stored in pointer syntax: *((int *)p)
  // cout<<p;
    p=&b;
    printf("\naddress of b %d",p);
  printf("\nvalue in b= %d",*((float *)p));
    getch();
    return 0;
}

