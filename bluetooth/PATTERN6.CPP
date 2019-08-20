#include<conio.h>
#include<stdio.h>
int main()
{
    int r,sp,n,c;
    printf("Enter the number of lines to be printed: ");
    scanf("%d",&n);
    printf("\n\n");
    for(r=1;r<=n;r++)
    {
       for(sp=1;sp<=(n-r);sp++)
       {
    printf(" ");
       }
       for(c=1;c<r;c++)
       {
    printf("%d",c);
       }
       while(c>0)
       {
    printf("%d",c);
    c--;
       }
       printf("\n");
     }
getch();
} 
