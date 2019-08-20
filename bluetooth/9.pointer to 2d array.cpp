#include<stdio.h>
#include<conio.h>
main()
{
      int i,j;
      int a[3][3];int *p;
      printf("\nEnter array elements :\n");
      for(i=0;i<3;i++)
      for(j=0;j<4;j++)
      scanf("%d",&a[i][j]);
      printf("\nElements of Matrix A:\n\n");//DISPLAY THE ELEMENTS IN MATRIX FORM
for (i=0; i<3; i++)
{
for (j=0; j<4; j++)
printf("\t%d", a[i][j]);
printf("\n\n");
}
      p=&a[0][0];
      printf("/nFirst element =%d",*p);
      printf("\na[2][3] =%d",(*p+(2*4+3)*sizeof(int)));
      printf("\na[1][0] =%d",a[i]);
      printf("\na[1][1] =%d",a[i]+sizeof(int));
      printf("\n&a[1][2] =%d",a[1]+(2*sizeof(int)));
      getch();
      }
