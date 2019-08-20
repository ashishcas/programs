/* c program for symbol triangle*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int num,c;
 printf("Enter loop repeat number(rows): ");
 scanf("%d",&num);
 for(; num>=1; num--)
 {
  for(c=1; c<=num; c++)
     printf("@");
  printf("\n");
 }
 getch();
 return 0;
}

/*************OUTPUT**************
Enter loop repeat number(rows): 5

@	@	@	@	@
@	@	@	@	
@	@	@	
	
@	@	
	
	
@

***********************************/
