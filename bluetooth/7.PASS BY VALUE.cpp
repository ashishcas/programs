//PASS BY VALUE EXAMPLE FOR SWAPPING
#include<conio.h>
#include<stdio.h>
main()
{
      int a,b;
      void swap(int,int);//FUNCTION DECLARATION
      printf("enter two numbers="); 
      scanf("%d%d",&a,&b);
      printf("\n before calling(in main) a= %d and b =%d",a,b);
      swap(a,b); //function calling with actual arguments
      printf("\n after calling (in main) a= %d and b =%d",a,b);
     printf("%d",a);
      getch();
      return 0;
      }
      void swap( int x,int y) //function defination
      {
           int z;
           z=x;
           x=y;
           y=z;
           printf("\n after modification (in function) x= %d and y =%d",x,y);
          
		   }
