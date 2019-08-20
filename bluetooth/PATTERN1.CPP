#include<conio.h>

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEneter the no of lines to be printed: ");

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       for(j=0;j<=i;j++)
       {
   if(j%2==0)
printf("0");
   else
printf("1");
       }
       printf("\n");
    }
    getch();
}


