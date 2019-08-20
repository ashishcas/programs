#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nstart,nstop ; //declaring integer variables to take input
    printf("Asking user to enter nstart value \n");
    scanf("%d",&nstart); // taking input from user
    if(nstart >= 0)   // checking whether  given input is postive
    {
        printf("Asking user to enter nstop value \n");
    scanf("%d",&nstop);
    }
    if(nstop >= 0) // checking whether  given input is postive
    {
        int i,sum=0; // declaring integer i to run for loop and sum to store the squares of numbers
        for(i = nstart; i<= nstop ;i++)
        {
            sum = sum+i*i; // caluculating sum of squares of numbers between nstart and nstop using for loop
        }
        printf("nstart = %d ",nstart);
        printf("nstop = %d",nstop);
        printf("======> zNo(%d,%d) = %d",nstart,nstop,sum);
    }
    return 0;
}
