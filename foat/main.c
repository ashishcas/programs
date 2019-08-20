#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[1000];
    int n,i;
    printf("ENTER THE NUMBER OF VALUES");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

    for(i=0;i<n;i++)
    {

       printf("%f \n",a[i]);

    }
    return 0;
}
