//PROGRAM TO SHOW WORKING OF IF-ELSE TO PERFORM ADDITION OF TWO NUMBER
#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,c,x;
     printf("enter three numbers:");
     scanf("%d%d%d",&a,&b,&c);
     x=a+b+c;
     printf("\nAddition for the entered numbers is= %d",x);
        if(x>100 && x<200)
           {  
            printf("\n Sum of the above numbers is in range of 100 and 200");
             }
             else 
             {
                  printf("\n Sum of the above numbers is out of range");
                  }
                 getch();
    }
             
