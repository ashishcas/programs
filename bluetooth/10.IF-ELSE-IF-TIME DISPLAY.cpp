//PROGRAM TO DISPLAY WHAT TIME OF THE DAY IT IS UING IF-ELSE
#include<conio.h>
#include<stdio.h>
main()
{
      float time;
      printf("enter time in hours eg(12.30) :");
      scanf("%f",&time);
      if((time>=0.0)&&(time<12.0))
      printf("\n its Morning-GOOD MORNING");
      else if((time>=12.0)&&(time<18.0))
      printf("\n Its Noon-GOOD AFTERNOON");
      else if((time>=18.0)&&(time<20.0))
      printf("\n Its Evening-");
      else 
      printf("\ntime is out of range");
      getch();
      }
      
