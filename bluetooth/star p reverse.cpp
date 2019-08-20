/*C program for reverse star pyramid*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int num,c,sp,r=1;
 printf("Enter loop repeat number(rows): ");
 scanf("%d", &num);
 printf("\n");
 for(; num>=1; num--,r++)
 {
  for(c=1; c<=num; c++)
    printf("*");
  for(sp=r; sp>1; sp--)
    printf(" ");
  for(sp=r; sp>1; sp--)
    printf(" ");
  for(c=num; c>=1; c--)
    printf("*");
  printf("\n");
 }
 getch();
 return 0;
}
