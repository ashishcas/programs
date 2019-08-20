#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines to be printed: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
   printf("%d",j);

       }
       printf("\n");
     }
getch();
} 
