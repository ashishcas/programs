#include<conio.h>
#include<stdio.h>
main()
{
      int a,b;
      void swap(int,int);
      printf("enter two numbers="); 
      scanf("%d%d",&a,&b);
      printf("\n before calling(in main) a= %d and b =%d",a,b);
      swap(a,b); 
      printf("\n after calling (in main) a= %d and b =%d",a,b);
     printf("%d",a);
      getch();
      return 0;
      }
      void swap( int a,int b)
     {
a=a+b;
b=a-b;
a=a-b;
printf("\n after modification  a= %d and b =%d",a,b);
} 
