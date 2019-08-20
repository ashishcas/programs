#include<stdio.h>
#include<conio.h>
int main()
{
    int nc;
    printf("Enter the number of calls");
    scanf("%d",&nc);
    if(nc<100)
          {
             goto charge0; 
          }
    else if(nc>99 && nc<200)
          {
             goto charge1;     
             }       
    else if(nc>199 && nc<300)
          {
             goto charge2;     
             }      
    else
           {
             goto charge3;      
             } 
    charge0:
           printf("\nTotal charges are Zero");
           getche();
           return;
    charge1:
           printf("\nTotal charges are %d",nc*1);
           getche();
           return;
    charge2:
           printf("\nTotal charges are %d",nc*2);
           getche();
           return;
    charge3:
           printf("\nTotal charges are %d",nc*3);
     getch();
      return;
    }
             
