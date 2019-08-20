/* c program for symbol triangle*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int num,r,c,sp;
 printf("Enter loop repeat number(rows): "); 
 scanf("%d",&num);
 for(r=1; num>=r; r++)
 {
  for(sp=num-r; sp>=1; sp--)
  {
     printf(" ");
     }
  for(c=1; c<=r; c++)
  {
     printf("@");
     }
  printf("\n");
 }
 getch();
 return 0;
}
/*************OUTPUT**************
Enter loop repeat number(rows): 5
                @
            @   @
        @   @	@
    @   @	@	@
@	@	@	@	@
***********************************/
