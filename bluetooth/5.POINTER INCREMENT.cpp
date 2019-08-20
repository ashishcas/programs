// A POINTER INCREMENT
#include<conio.h>
#include<stdio.h>
main()
{
int i=5, *ptr;
ptr=&i;
printf("\n%d",ptr);
printf("\n%d",&ptr);
//ptr++;
printf("\n%d",&ptr);
printf("\n");
printf("\n%d",*ptr);
printf("\n%d",++(*ptr));
printf("\n%d",(*ptr)++);
printf("\n%d",*ptr);
getch();
}
