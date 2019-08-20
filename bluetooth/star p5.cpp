/*c program for star pyramid*/
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
  int num=6,r,c,sp;
  for(r=1; num>=r; r++)
  {
   for(sp=num-r; sp>=1; sp--)
       printf(" ");
   for(c=r; c>=1; c--)
        printf("*");
   for(c=r; c>1; c--)
        printf("*");
   printf("\n");
  }
  getch();
  return 0; 
 }


/***************OUTPUT***************
                    *	
                *	*	*	
            *	*	*	*	*	
        *	*	*	*	*	*	*	
	*	*	*	*	*	*	*	*	*	
*	*	*	*	*	*	*	*	*	*	*

***************************************/
