#include<stdio.h>
#include<conio.h>
main()
{
 int i,j;
 printf("Displaying right angled triangle for 5 rows\n");
 for(i=1 ; i<=5 ; i++) 
 { 
   for(j=1 ; j<=i ; j++)
   {
   	printf("* ");
   printf("\n");
}
 }
 getch();
}
