//PROGRAM TO CALCULATE SQUARE OF NUMBER IF REMAINDER IS 5 USING IF-ELSE
#include<stdio.h>
#include<conio.h>
int main()
{
     int s,d;
     printf("enter a number:");
     scanf("%d",&s);
     d=s%10;
     //printf("\nAddition for the entered numbers is= %d",x);
        if(d==5)
           {  
                s=s/10;
            printf("\n square=%d%d",s*(1+s),d*d);
             }
             else 
             {
                  printf("\n invalid number");
                  }
                 getch();
    }
             
