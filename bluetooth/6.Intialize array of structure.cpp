//PROGRAM TO SHOW HOW STRUCTURES ARE INTIALIZED
#include<conio.h>
#include<stdio.h>
struct record
{
       char name[10];
       int ac_no;
       char ac_type;
       float balance;
       };
       main()
       {
             struct record c[]=
                               {'A',111,"Aaa",1111.50},
                               {"BBB",222,'B',2222.50},
                               {"CCC",333,'C',3333.50},
                               
             int i;
             printf("\nAccount Information\n");
             for(i=0;i<3;i++)
             {
                             printf("\nName :%s",c[i].name);
                             printf("\tAcc_no :%d",c[i].ac_no);
                             printf("\tAcc_type :%c",c[i].ac_type);
                             printf("\tBalance : %f",c[i].balance);
                             }
                             getch();
                             }
             
