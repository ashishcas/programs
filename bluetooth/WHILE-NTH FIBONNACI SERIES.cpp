//PROGRAM TO PRINT FIBONACCI NUlMBER
#include<conio.h>
#include<stdio.h>
int main()
{
int a=0,b=1,n,count=3;
int c=0;
printf("\n Enter number N : ");
scanf("%d",&n);
if(n==1)
printf("0");
if(n==2)
printf("1");
while(count<=n)
{
               c=a+b;
               a=b;
               b=c;
               count++;
               }
               if(c!=0)
               printf("%dth number is %d ",n,c);
               getch();
               }
