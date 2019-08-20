//MEMORY NEEDED TO STORE UNION AND STRUCTURE
#include<stdio.h>
#include<conio.h>
#include<iomanip.h>
struct student1
{
       int rollno;
       char name[20];
       float marks;
       } s1;
       union student2
       {
       int rollno;
       char name[20];
       float marks;
       } s2;
       main()
       {
       printf("\nMemory requirement for structure =  ");
       printf("%d",sizeof(s1));//float and" int take 4 memory size in this
       printf("\n Memory requirement for Union = ");
       printf("%d",sizeof(s2));
       getch();
       return 0;
       }
       
