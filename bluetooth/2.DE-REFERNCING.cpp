
/**** Program to Illustrate the Concept of Pointers ****/
#include <stdio.h>
#include<conio.h>
main()
{
int a = 10;
int b=100,p;
//int *const=a ;
//p = &a;
p=&b;
printf("\nAddress of a: %u", &a);
printf("\n\nAddress of a: %u", p);
printf("\n\nAddress of p: %u", &p);
printf("\n\nValue of p: %d", p);
printf("\n\nValue of a: %d", a);
p=&b;
printf("\n\nValue of a: %d", b);
//printf("\n\nValue of a: %d", *(&a));
printf("\n\nValue of a: %d", *p);
getch();
}
