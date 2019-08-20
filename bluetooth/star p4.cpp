/* c program for symbol triangle*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int num,r=1,c,sp;
 printf("Enter loop repeat number(rows): "); 
 scanf("%d",&num);
 for(; num>=1; num--,r++)
 {
  for(sp=r; sp>1; sp--)
     printf(" ");
  for(c=1; c<=num; c++)
    printf("#");
  printf("\n");
 }
 getch();
 return 0;
}

/*************OUTPUT**************
Enter loop repeat number(rows): 5
#####
 ####
  ###
   ##
    #
***********************************/
