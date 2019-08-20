#include <stdio.h>
#include <stdlib.h>

void MphandMinutestoMiles(double milesPerhour,double minutesTraveled)
{
    double hoursTraveled,milesTraveled;

    hoursTraveled = minutesTraveled/60.0;
    milesTraveled = hoursTraveled*milesPerhour;

    printf("Miles : %lf \n",milesTraveled);
}


int main()
{
    double milesPerhour = 70.0;
    double minutesTraveled = 100.0;
    MphandMinutestoMiles(milesPerhour,minutesTraveled);

    return 0;
}
