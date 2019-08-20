#include <stdio.h>
#include <stdlib.h>
int i;

void square();

int main()
{
    printf("Printing Squares of numbers from 1 to 10 \n");
    square();//calling the function
    return 0;
}

void square()
{
    for(i=0;i<11;i++)
    {
        printf("Square of number %d is : %d \n",i,i*i);
    }
}
