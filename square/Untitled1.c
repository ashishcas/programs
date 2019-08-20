#include<stdio.h>

int main()
{
    int n;
    printf("Enter size\n");
    scanf("%d",&n);

    float a[n],b[n];

    int i;
    printf("Enter elements in the numerator\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

    printf("Enter elements in denominator\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&b[i]);
    }
    float sum=0;

    for(i=0;i<n;i++)
    {
        sum=sum+(a[i]/b[i]);
    }
    printf("THe sum of fractions is \n");
    printf("%f",sum);
    return 0;
}
