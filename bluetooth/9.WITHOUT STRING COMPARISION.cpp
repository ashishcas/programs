//PROGRAM TO COMPARE TWO STRING WITHOUT LIBRARY FUNCTIONS
#include<stdio.h>
#include<conio.h>
main()
{
char string1[5],string2[5];
int i,temp = 0;
printf("Enter the string1 value:\n");
gets(string1);
printf("\nEnter the String2 value:\n");
gets(string2);
for(i=0; string1[i]!='\0'; i++)
{
if(string1[i] == string2[i])
temp = 1;
else
temp = 0;
}
if(temp == 1)
printf("Both strings are same.");
else
printf("Both string not same.");
getch();
}
