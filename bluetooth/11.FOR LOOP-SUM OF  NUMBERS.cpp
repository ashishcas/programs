//WORKING OF FOR LOOP
#include<stdio.h>
#include<conio.h>
int main()
{
int count =1;
   int total = 0;
   int num;
for(int i=1;i<=4;i++)
{
        printf("\nEnter a number: ");	
scanf("%d",&num);	
total = total + num;	
printf( "The total is now  %d ", total);	
}
getch();
}
