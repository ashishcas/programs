#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    printf("Enter the number of lines to be printed: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=n;i>0;i--)
    {
       for(j=0;j<n-i;j++)
       {
     printf(" ");
       }
       for(k=i;k>0;k--)
       {
     printf("%d",k);
       }
       printf("\n");
     }
getch();
}
