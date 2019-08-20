#include<stdio.h>
#include<conio.h>
main ()
{
int a,b;
 int swap (int,int);
printf("\n enter the value of a \n ");
scanf("%d",&a);
printf("\n enter the value of b \n  ");
scanf("%d",&b);
printf(" \n before swapping value of a= %d and b =%d,a,b");
swap(a,b);
printf("\n after swapping value of a= %d and b =%d",a,b);
printf("%d",a);
getch();
}
int swap(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("\n after modification  a= %d and b =%d",a,b);
return 0;
}
