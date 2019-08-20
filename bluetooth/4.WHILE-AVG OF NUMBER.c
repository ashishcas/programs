//PROGRAM TO CALCULATE AVERAGE OF N NUMBER-WHILE
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    float sum=0,avg,x;
    printf("How many number???\n");
    scanf("%d",&n);
    while(i<=n)
    {
               printf("\nNow enter number----x =");
               scanf("%f",&x);
               sum+=x;
               printf("sum is %f",sum);
               ++i;
    }
     avg=sum/n;
     printf("\n Average is %f\n",avg);
    
    getch();
}                
