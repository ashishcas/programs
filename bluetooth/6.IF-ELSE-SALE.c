//PROGRAM TO CALCULATE THE SALARY USING IF-ELSE
#include<stdio.h>
#include<conio.h>
int main()
{
    float basic,sales,hra,cv,da,incentive,bonus,salary;
    printf("enter the sales value ");
    scanf("%f",&sales);
     
     if(sales >= 100000)
      {
              basic=3000;
              hra=(20*basic)/100;
              da=(110*basic)/100;
              cv=500;
              incentive=(10*sales)/100;
              bonus=500;
      }
      else
      {
              basic=3000;
              hra=(20*basic/100);
              da=(110*basic/100);
              cv=500;
              incentive=(5*sales/100) ;
              bonus=200;
      }
      salary=basic+hra+da+cv+incentive+bonus;
      printf("\ntotal sales%f",sales);
      printf("\nbasic salary%f",basic);
       printf("\nhra%f",hra);
        printf("\nda%f",da);
         printf("\ncv%f",cv);
          printf("\nincentive%f",incentive);
           printf("\nbonus%f",bonus);
      
      printf("salary of medical representative will be %f",salary);
      getch();
    }
             
