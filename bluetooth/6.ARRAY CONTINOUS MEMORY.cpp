//WAP TO SHOW ARRAY ELEMENTS ARE STORED IN CONTIGUOUS MEMORY LOCATION
#include<conio.h>
#include<stdio.h>
main()
{
      int x[5]={20,30,40,50,60};
      int i;
      int *ptr,*ptr1;
      ptr=x;
      ptr1=&x[0];
      printf("%d",ptr);
      printf("\n%d",ptr1);
      for(i=0;i<5;i++)
      {
      printf("\n x[%d]=%d",i,x[i]);
      printf(" address of x[%d]=%u",i,&x[i]);
      }
      getch();
      }
