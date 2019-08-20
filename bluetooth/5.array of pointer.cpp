//To calculate total marks obtained by 10students in different subject
#include<stdio.h>
#include<conio.h>
struct student
{
       int sub1;
       int sub2;
       int sub3;
       };
       main()
       {
             struct student s[10];
             int i,total=0;
             for(i=0;i<=5;i++)
             {
                              printf("\nEnter marks in three subjects for student [%d]",i+1);
                              scanf("%d%d%d",&s[i].sub1,&s[i].sub2,&s[i].sub3);
                              total=s[i].sub1+s[i].sub2+s[i].sub3;
                              printf("\n Total marks of s[%d] student :%d",i,total);
                              }
                              getch();
                              }
                              
