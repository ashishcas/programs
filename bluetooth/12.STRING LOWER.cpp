//PROGRAM TO CONVERT STRING IN LOWER CASE
#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
{
char a[15];
printf("enter string in upper case=");
gets(a);
strlwr(a);
printf("string in lower is=");
puts(a);
getch();
}
