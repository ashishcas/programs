#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float y[100],x[100];
    printf("Enter the number of values \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("x     y     y     y \n");
    printf("------------------- \n");
       for(i=0;i<n;i++)
       {
           y[i] =(2.0/x[i])+3;
           printf("%f    %.2f     %.4f     %E\n",x[i],y[i],y[i],y[i]);
       }

    return 0;
}
