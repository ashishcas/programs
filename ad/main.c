#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,seat; // creating three arrays for seats between 1 to 30;
    char clas[15];
                                // declaring string to store class type
    printf("-----MENU-----\n");
    printf("Select your class\n");
    printf("first class \n");
    printf("business class \n");
    printf("economy class \n");
    printf("Enter your option : ");

    gets(clas);    // taking input th type of class

     if(strcmp(clas,"first class")==0)   // checking the type of class using strcmp string compare function

     {
         while(1)
         {
         printf("select First class seat number between 1-30 : ");
         scanf("%d",&seat);               // taking input the seat number for first class
         if(seat>0 && seat <=30)           // checking whether seat number is between 0 and 30
         {
             printf("you have selected seat no:%d of First class \n",seat);
            break;
         }
          else
            printf("Enter seat number between 1 - 30 \n");
         }
     }
     if(strcmp(clas,"economy class")==0)    // checking the type of class using strcmp string compare function
{
     while(1)
     {
         printf("select Economy class seat number between 1-30 : ");
         scanf("%d",&seat);      // taking input the seat number for economy class
         if(seat>0 && seat <=30)           // checking whether seat number is between 0 and 30
        {
        printf("you have selected seat no:%d of Economy class \n",seat);
              break;
        }
            else
            printf("Enter seat number between 1 - 30 \n");
     }
}

     if(strcmp(clas,"business class")==0)    // checking the type of class using strcmp string compare function

     {
        while(1)
        {

         printf("select Business class seat number between 1-30 : ");
         scanf("%d",&seat);                   // taking input the seat number for business class
         if(seat>0 && seat <=30)           // checking whether seat number is between 0 and 30
             {
                 printf("you have selected seat no:%d of Business class \n",seat);
               break;
             }
          else
            printf("Enter seat number between 1 - 30 \n");

        }
     }


return 0;
}
