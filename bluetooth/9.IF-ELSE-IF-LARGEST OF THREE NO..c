//PROGRAM TO FIND LARGEST OF THREE NUMBERS USING IF-ELSE-IF
#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,c;
     printf("enter three numbers=");
     scanf("%d %d %d", &a,&b,&c);
     if(a>b && a>c)
           {
            printf("a is greatest");
           if(a<10)
            {
                     printf("\nhello");
            }
            else
            {
            printf("\nsorry");
            }}
            else if(b>a && b>c)
           { 
                 printf("b is greatest");
                 if(b<10)
                 printf("\ni am in b");
                // else
                 //printf("\nhello");
                 else if(b<5)
                 printf("its working");
            }
            else
           {
           printf("c is greatest");
           /*if(c<10)
           {printf("\n i am c");
            }
            else
            {
            printf("\n i am also c");
            }*/}
     getch();
    }
             
