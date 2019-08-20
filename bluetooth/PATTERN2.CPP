#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("\nEnter the no of lines to be printed: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       for(j=n-i;j>0;j--)
       {
   printf(" ");                        //THIS IS THE CODE FOR PRINTING THE SPACES.
       }
       for(k=0;k<=i;k++)
       {
   if(k%2==0)
       printf("0");
   else
       printf("1");
       }
       printf("\n");
    }
    getch();
}
