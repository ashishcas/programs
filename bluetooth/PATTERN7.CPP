#include<conio.h>
#include<stdio.h>
int main()
{
   
   
    int i,j,n,k,num=1;
    printf("Enter the number of lines to be printed: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
       for(j=0;j<(n-i);j++)
       {
    printf("  ");
       }
       for(k=1;k<=i;k++)
       {
    printf("%4d",num++);
       }
       printf("\n");
     }
getch();
}
