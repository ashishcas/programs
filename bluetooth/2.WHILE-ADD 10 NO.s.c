//TO CALCULATE SUM OF 10 NUMBERS
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,sum=0;
    printf("Numbers are\n");
    while(i<=10)
    {
              printf(" %d\n",i);
              sum=sum+i;
              i++;
    }     
     printf("Sum is:%d",sum);
    getch();
}                
