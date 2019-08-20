/* Program to Reverse a String without using strrev() */
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
char string1[10], string2[10];
int i, length;
printf("Enter any string:\n");
gets(string1);
length = strlen(string1)-1;
for(i=0; string1[i]!='\0'; i++)
{
string2[length]=string1[i];
length--;
}
string2[length]='\0';
printf("\nThe Reverse of string is:\n");
puts(string2);
getch();
}
