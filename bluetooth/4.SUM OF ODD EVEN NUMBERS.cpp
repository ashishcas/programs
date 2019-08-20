#include<stdio.h>
#include<conio.h>
int main()
{
int arr[10],a=0,s=0,i;
for(i=0;i<10;i++)
{
printf("enter no");
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
if(arr[i]%2==0)
{
a=a+arr[i];
}
else
{
s=s+arr[i];
}
}
printf("sum of even numbers is%d\n",a);
printf("sum of odd numbers is%d\n",s);
getch();
}
