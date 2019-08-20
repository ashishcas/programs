//PROGRAM TO CONTACENATE TWO STRINGS USING STRCAT()
#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
{
char s1[10],s2[10];
printf("enter text 1=");
gets(s1);
printf("enter text 2=");
gets(s2);
strcat(s1,s2);
printf("%s",s1);
getch();
}
