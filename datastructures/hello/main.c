#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,yr,first;
    printf("enter the year");
    scanf("%d",&year);
    yr=year%100;
    printf("last two digits of the year=%d",yr);
    first=year/100;
    printf("first two digits of the year=%d",first);


    return 0;
}
