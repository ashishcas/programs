//PROGRAM TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    long int fact=1;
    printf("\n Enter a number : ");
    scanf("%d",&n);
    while(i<=n)
    {
         fact=fact*i;
         i++;
         }
         printf("factorial is %ld",fact);
         getch();
         }     
