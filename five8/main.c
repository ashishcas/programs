#include <stdio.h>
#include <stdlib.h>

int multfiveEights(int a) //function to caluculate fiveEights
{
    return (a*5/8);
}

int main()
{
    int op,number;
    printf("ENTER THE NUMBER OF OPERATIONS \n");
    scanf("%d",&op); //taking input for number of operations

    if(  op<20 ) // checking the number of operation is less than 20
    {
        int i=0;
        while(i<op)
        {

            printf("ENTER THE NUMBER  \n");
            scanf("%d",&number);
            printf("FIVEEIGHTS OF NUMBER IS : %d \n",multfiveEights(number));
            i++;
        }
    }

    else
    {
        return 0;
    }

    return 0;
}
