#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if(a%2==0)
    {
              goto even;
           //   printf("number is even");
     }
     else
     {
         goto odd;
        // printf("number is odd");
     }
     even:
          printf("number is even\n");
   getch();
     return;
     odd:
         printf("number is odd");
    
     getch();
    }
             
