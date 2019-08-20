//EVALUATE AND DISPLAY THE RESULT OF N STUDENTS USING ARRAY OF STRUCTURE
#include<conio.h>
#include<stdio.h>
struct student
{
       int rollno;
       char name[20];
       float marks[4];
       float tmo;
       float per;
       };
       int main()
       {
           student s[20];
           int n,i;
           printf("\n enter the number of students");
           scanf("%d",n);
           for ( i=0;i<n;i++)
           {
           printf("\n enter data for student %d:",i+1);
           printf("\nenter roll number =");
           scanf("%d",s[i].rollno);
           printf("\nenter names ");
           scanf("%s",s[i].name);
           s[i].tmo=0;
           printf("\nenter marks of  four subjects");
           for(int j=0;j<4;j++)
           {
                   scanf("%f",s[i].marks[j]);
                   s[i].tmo+=s[i].marks[j];
                   }
                   s[i].per=s[i].tmo/400*100;
                   }
                   printf("\nDisplay student result /n");
                   for(i=0;i<n;i++)
                   {
                                   printf("\nroll number is %d",s[i].rollno);
                                   printf("\nNames = %s",s[i].name);
                                   printf("\nMarks in four subjects");
                                   for(int j=0;j<4;j++)
                                   printf("%f\t",s[i].marks[j]);
                                   printf("\ntotal marks obtained = %f",s[i].tmo);
                                   printf("\npercentage =%f",s[i].per);
                                   }
                                   getch();
                                   return 0;
                                   }
