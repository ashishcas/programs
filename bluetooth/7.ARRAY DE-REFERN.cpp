//PROGRAM TO DEMEONSTRATE THE VALUE X[i] and *(x+i) are equal
#include<conio.h>
#include<stdio.h>
main()
{
      int x[5]={20,30,40,50,60};
      int i;
      for (i=0;i<5;i++)
      {
      printf("\nx[%d]=%d", i,x[i]);
      printf(" and *(x+%d) = %d",i,*(x+i));
      }
      getch();
      }
