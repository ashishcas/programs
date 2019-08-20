/*c program for symbol pyramid*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int num,r,c,sp;
  printf("Enter number of rows : ");
  scanf("%d",&num);
  for(r=1; r<=num; r++)
  {
    for(sp=num-r; sp>=1; sp--)
        printf(" ");
    for(c=1; c<=r; c++)
        printf("*");
    for(c=r-1; c>=1; c--)
        printf("*");
    printf("\n");
  }
  for(r=1; r<=num; r++)
  {
    for(sp=r; sp>=1; sp--)
        printf(" ");
    for(c=1; c<=(num-r); c++)
        printf("*");
    for(c=num-r-1; c>=1; c--)
        printf("*");
    printf("\n");
  }
  getch();
  return 0;
}
