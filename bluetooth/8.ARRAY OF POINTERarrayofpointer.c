#include<stdio.h>
#include<conio.h>
//using namespace std;
int main()
{
int a[5]={1,22,35,4,5},i;
int *p[5];
for(i=0;i<5;i++)
{
p[i]=a+i;
}
for(i=0;i<5;i++)
{
printf("%d",a);
printf("\naddress:%d",a+i);
printf("\nvalue=%d",*(a+i));
printf("\nat location=%d",p+i);
printf("\naddress=%d",(*(p+i)));
printf("\n************");
}
getch();
}
