#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,array[100],i=0,j;
    int t=1;
    printf("ENter array \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    i=0;
    j=n-1;


    while(i<j)
    {
        if(array[i]==array[j])
        {
          i++;
          j = n-i-1;
          t= 1;

        }
        else
        {
            printf("not symmetric");
            t = 0;
            break;
        }

    }
    if(t==1)
    {
        printf("symmetric \n");
    }

    return 0;
}
