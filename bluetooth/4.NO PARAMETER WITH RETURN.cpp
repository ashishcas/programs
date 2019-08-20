#include<conio.h>
#include<stdio.h>
int main()
{						

//int a=10,b=20;
int c,z;
int sum();	//function declaration
c=sum();	 //actual arguments
printf("sum is %d",z);		
getch();
}
int sum()		//formal arguments
{
int x=10,y=30;
int z;
z=x+y;
return(z);         //*return value
}
