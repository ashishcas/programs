//STRING COMPARISION FUNCTION
#include <stdio.h>
#include <string.h>
#include<conio.h> 
 main()
{
   char a[100], b[100];
 
   printf("Enter the first string=");
   gets(a);
 printf("\nEnter the second string=");
   gets(b);
 if( strcmp(a,b) == 0 )
      printf("Entered strings are equal.\n");
else
 printf("Entered strings are not equal.\n");
      printf("hi");
 
 getch();
   //return 0;
}
