//CALCULATE FACTORIAL OF A NUMBER
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,fact=1;
    printf("Enter any number\n");
    scanf("%d",&i);
    
    while(i>0)
    {
              printf("%d*",i);
              fact=fact*i;
              i--;
           
           
    }     
     printf("=%d",fact);
    getch();
}                
