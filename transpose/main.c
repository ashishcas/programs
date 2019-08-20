#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],t[10][10],m,n,i,j;
    printf("ENter the NUmber of rows and columns :");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("Enter element a%d%d: ",i+1, j+1);
        scanf("%d",&a[i][j]);
    }
    }
    printf("Entered matrix is \n");
     for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("%d  ", a[i][j]);
            if (j == n-1)
                printf("\n\n");
    }
    }
    //finding the transpose of matrix
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        t[j][i] = a[i][j];
    }
    }
    printf("transpose of a matrix is \n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("%d  ", t[i][j]);
            if (j == n-1)
                printf("\n\n");
    }
    }
    return 0;
}
