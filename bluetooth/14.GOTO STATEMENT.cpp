#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(int i=1;i<=3;i++)
    {
      for(int j=1;j<=2;j++)
      {
         if((i==3)||(j==2))
         goto out;
       else
       printf("\n%d %d",i,j);
       }
       }
     out: printf("\nhello");
     getch();
     }                
