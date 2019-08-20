//TO CALCULATE THE LENGTH OF STRING USING STRLEN()
#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
{
char str[20];
int length;
printf("enter string=");
//gets(str);
scanf("%s",&str);
length=strlen(str);
printf("%d",length);
getch();
}
