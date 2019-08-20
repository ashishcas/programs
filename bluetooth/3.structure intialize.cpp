#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
main()
{
struct student s1 = {"abc", 1, 450};
printf("\nStudent Name\tRollno\tMarks\n");
printf("%s\t%i\t%f", s1.name, s1.rollno, s1.marks);
printf("\n");
getch();
}
