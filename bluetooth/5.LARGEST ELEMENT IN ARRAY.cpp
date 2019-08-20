//LARGEST OF TWO ELEMENTS
#include<stdio.h>
#include<conio.h>
int main()
{
//int big(int a[],int);
int a[100];
int i,n, large,k,x;
printf("number of elements in the array=");
scanf("%d",&n);
printf("\nenter the elements=");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
printf("contents of array=\n");
for(i=0;i<=n-1;i++)
{
printf("%d",a[i]);
printf("\n");
}
large=a[0];
for(i=0;i<=n-1;i++)
{
if(large<a[i])
large=a[i];
}
printf(" large=%d\n",large);
getch();
}




