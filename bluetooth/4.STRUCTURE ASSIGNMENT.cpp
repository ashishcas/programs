#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rollno;
float marks;
}s2;
main()
{
struct student s1 = {"abc", 1, 450};
s2=s1;
printf("\nStudent Name\tRollno\tMarks\n");
printf("%s\t%i\t%f", s2.name, s2.rollno, s2.marks);
printf("\n");
getch();
}
