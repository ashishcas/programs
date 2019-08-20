#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of lines to be printed: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<n;i++)
    {
       for(j=0;j<(n-i-1);j++)
       {
    printf(" ");
       }
       for(k=1;k<=2*i+1;k++)
       {
    printf("%d",k);
       }
       printf("\n");
     }
getch();
}
