//DECLARING A POINTER
#include<conio.h>
#include<stdio.h>
main()
{
int i=5, *ptr;
ptr=&i;
printf("%d",ptr);
printf("\n");
printf("%d",*ptr);
printf("\n%d",i);
printf("\n%d",&ptr);


getch();
}
