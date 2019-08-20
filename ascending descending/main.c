#include <stdio.h>
#include <stdlib.h>

int isAscending(int a[])
{
    int i=0,count = 0;
    for(i=0;i<9;i++)
    {
        if(a[i+1] > a[i] )
        {
            count = 1;
        }
        else
            return 0;
    }
    return count;
}

int isDescending(int a[])
{
    int i=0,count2 = 0;
    for(i=0;i<9;i++)
    {
        if(a[i+1] < a[i] )
        {
            count2 = 1;
        }
        else

           return 0;
    }
    return count2;
}

int main()
{
    int array[10];
    int j;
    printf("ENTER TEN INTEGERS : ");
    for(j=0;j<10;j++)
    {
        scanf("%d",&array[j]);
    }
    if(isAscending(array) == 1)
         printf("The values are in Ascending order \n");
    else if(isDescending(array) == 1)
         printf("The values are in descending order \n");
     else
         printf("The values are neither in ascending nor in descending order \n");
    return 0;
}
