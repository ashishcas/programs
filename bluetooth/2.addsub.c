#include<stdio.h>
//using namespace std;
#include<conio.h>
int main()
{
          int a,b,c,sum(int,int),m,n;
     printf(" Enter any two numbers=");
             scanf("%d %d",&a,&b);
             c=sum(a,b);
             printf("\n Sum=: %d",c);
             c=a-b;
             printf("\n Subtract=: %d" ,c);
             c=a*b;
             printf("\n Multiply=: %d" ,c);
             c=a/b;
             printf("\n Division=: %d" ,c);
             getch();
             }
       sum(int a,int b)
       {
            return(a+b);
            }      
