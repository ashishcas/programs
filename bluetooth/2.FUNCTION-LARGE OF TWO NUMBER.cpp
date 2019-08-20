#include<stdio.h> 
#include<conio.h>
main()
{
float a , b , max;
float large(float x , float y);                              /* Function declaration */

printf(" Enter the value of two numbers\n");
scanf("%f%f" , &a , &b);

printf("a = %f and b = %f\n" , a, b);
max = large(a,b);
printf(" The largest number is = %f\n" , max);
getch();

}                                                                   /* End of main() */
   /* Function to determine the largest number */

float large(float x , float y)
{
if(x>y)
{
return(x);
}
else                                                               /* ( y>x )  */
{
return(y);
}
}
