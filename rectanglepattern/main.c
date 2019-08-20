#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, j, height, width;

    /* Input number of rows and columns from user */
    printf("Enter no of rows--height: ");
    scanf("%d", &height);
    printf("Enter no of columns-- width: ");
    scanf("%d", &width);

    /* Iterate over each row */
    for(i=1; i<=height; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=width; j++)
        {
            if(i==1 || i==height )
            {
                /* Print star for 1st and last row, column */
                printf("=");
            }
            else if(  j==1 || j == width )
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }

        /* Move to the next line */
        printf("\n");
    }

    printf("\n\n\n");
     for(i=1; i<=height; i++)
    {
        /* Print spaces in decreasing order of row */
        for(j=i; j<width; j++)
        {
            printf(" ");
        }

        /* Print star in increasing order or row */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}
