//PROGRAM TO ILLUSTRATE HOW MALLOC ALLOCATES MEMORY
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
      int *x;
      int i,n;
      printf("\nHow many elements :");
      scanf("%d",&n);
      x=(int*)calloc(n,sizeof(int));
      printf("\nEnter elements :");
      for(i=0;i<n;i++)
    // scanf("%d",&*(x+i));
      printf("\nData :\n");
      for(i=0;i<n;i++)
      printf("\nx[%d] = %d its address =%u",i,*(x+i),(x+i));
      getch();
      }
      
      
      
