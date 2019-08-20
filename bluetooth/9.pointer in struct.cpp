//Program to show working of pointer to structure
#include<stdio.h>
#include<conio.h>
//namespace std()
struct date
{
       int day;
       int month;
     int year;
       };
       main()
       {
             date *p,obj={1,2,3};
             p=&obj;
             printf("%d\n%d\n%d",p->day,p->month,p->year);
             getch();
             }
             
