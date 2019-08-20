//PROGRAM TO ACCESS THE MEMBER OF STRUCTRE WHICH IS AN ARRAY AND WE HAVE POINTER TO STRUCTURE
#include<stdio.h>
#include<conio.h>
struct date 
{
int day;
int month;
int year;
};
struct account
{
       char name[5];
       struct date d1;
       };
       main()
       {
             struct account b ={"abcd",10,5,2014};
             struct account *p=&b;
             printf("%s",p->name);
             printf("\n%s",p->name+1);
             printf("\n%s",p->name+2);
             printf("\n%c",p->name[3]);
             scanf("%u",p->d1.day);
             printf("%u",p->d1.day);
             
             getch();
             }
             
