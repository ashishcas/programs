#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,c,x;
     printf("enter three numbers:");
     x=scanf("%d%d%d",&a,&b,&c);
        if(x==3)
           {
            printf("\nAddition for the entered numbers is= %d",a+b+c);
            printf("\nMultiplication for the entered numbers is= %d",a*b*c);
             }
                 getch();
    }
             
