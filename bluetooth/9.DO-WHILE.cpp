#include<stdio.h>
#include<conio.h>
int main()
{
int count =1;
   int total;
   int num;
while (count <=4)
{printf("\nEnter a number: ");	
scanf("%d",&num);	
total = total + num;	
printf( "The total is now  %d ", total);	
count++;
}
getch();
}
