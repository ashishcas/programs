#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
    int x,y=30,z;
    printf("\nEnter a number:");
    scanf("%d",&x);
    printf("\nConversion of Decimal to hexadecimal value\n");
    for(;;)
    {
           z=x%16;
           x=x/16;
           //gotoxy(y--,5);
           switch(z)
           {
                    case 10:
                         printf("A");
                         break;
                    case 11:
                         printf("%c",'B');
                         break;
                    case 12:
                         printf("%c","C");
                         break;
                    case 13:
                         printf("D");
                         break;
                    case 14:
                         printf("E");
                         break;
                    case 15:
                         printf("F");
                         break;
                    default:
                         printf("%d",z);
           }        
       }    
    getch();
}
