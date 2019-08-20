//ILLUSTRATE the STRUCTURE
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

struct student s1,s2;
printf("Enter student1 Name, Rollno, Marks:\n");
scanf("%s%i%f", &s1.name, &s1.rollno, &s1.marks);
printf("Enter student2 Name, Rollno, Marks:\n");
scanf("%s%i%f", &s2.name, &s2.rollno, &s2.marks);
printf("\nStudent Name\tRollno\tMarks\n");
printf("%s\t%i\t%f", s1.name, s1.rollno, s1.marks);
printf("\nStudent Name\tRollno\tMarks\n");
printf("%s\t%i\t%f", s2.name, s2.rollno, s2.marks);
printf("\nStudent Name\tRollno\tMarks\n");
printf("%s\t%i\t%f", s1.name, s2.rollno, s2.marks);
printf("\n");

getch();
}
