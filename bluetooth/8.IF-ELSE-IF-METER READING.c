//PROGRAM TO SHOW FUNCTIONING OF NESTED IF -METER READING
#include<stdio.h>
#include<conio.h>
int main()
{
    int start,end,c;
    float d;
    printf("Enter the starting and ending meter readings:");
    scanf("%d%d",&start,&end);
    c=end-start;
    if(c>200 && c<500)
      {
             d=c*3.50;
             printf("Energy bill is= %f",d);
       }
     else if(c>100 && c<200)
       {
             d=c*2.50;
             printf("Energy bill is= %f",d);
        }              
     else if(c<100)
       {
             d=c*1.50;
             printf("Energy bill is= %f",d);
       }
             
      getch();
    }
             
