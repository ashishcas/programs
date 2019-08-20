#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5],i,min = 9999,max =0;
    printf("Enter the 5  values\n");
    for(i=0;i<5;i++)
    {
        printf("Enter the %d value : ",i+1);
        scanf("%d",&array[i]);
        if(array[i] >= max)
        {
            max = array[i];
        }
        if(array[i]<min )
        {
            min = array[i];
        }
    }
    printf("The maximum value is : %d \n",max);
    printf("The minimum value is : %d \n",min);
    return 0;
}
