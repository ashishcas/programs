//PROGRAM TO SHOW WORKING OF CONTINUE
#include<stdio.h>
#include<conio.h>
int main ( )
{
	int k;
	for ( k= -5; k <= 25; k= k+5)
	{
		 printf("\nk=%d",k);
		 
	printf("Good Morning \n");
	continue;
//	break;

	printf("Good  \n");
        }
        printf("i am outside");
	
	getch();
}
