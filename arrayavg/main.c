#include <stdio.h>
#include <stdlib.h>
int midterm[100],final[100],result[100];
int n;
void average(int midterm[],int final[],int result[]);

int main()
{
    int i;
    printf("enter the number of values \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        midterm[i]= (rand()%50)+50;
    }
    for(i=0;i<n;i++)
    {
        final[i]= ((rand()%50)+50);
    }
    average(midterm,final,result);


    return 0;
}
void average(int midterm[],int final[],int result[])
{
    int j;
    for(j=0;j<n;j++)
    {
        result[j]=(midterm[j]+final[j])/2 ;
        printf("%d  %d  avg is : %d \n",midterm[j],final[j],result[j]);
    }
}
