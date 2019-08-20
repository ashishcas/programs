#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int economy[30],first[30],business[30],i; // creating three arrays for seats between 1 to 30;
    char clas[15]; // declaring string to store class type
    printf("-----MENU-----\n");
    printf("Select your class\n");
    printf("first class \n");
    printf("business class\n");
    printf("economy class\n");
     gets(clas);       // taking input the class
    for( i = 1 ;i<=30;i++)
    {
        economy[i] = 1;
        first[i] = 1;
        business[i] = 1;
    }
   printf("%s",clas);

    if(clas == first)
    {
        printf("Select seat between 1 to 30 of first class");

    }


    return 0;
}
