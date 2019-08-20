//EXAMPLE OF NESTED STRUCTURE
#include<stdio.h>
#include<conio.h>
//namespace std()
struct date
{
       int day;
       int month;
     int year;
       };
       struct employee
       {
              int emp_code;
              char emp_name[20];
              int dept_code;
              float salary;
             struct date doj;
              };
              int main()
              {
                  employee emp1;
                  printf("\nenter the code and name of employee =");
                  scanf("%d%s",&emp1.emp_code,&emp1.emp_name);
                  printf("\nenter date of joining =");
                  scanf("%d%d%d",&emp1.doj.day,&emp1.doj.month,&emp1.doj.year);
                  printf("\nenetr department code and salary =");
                  scanf("%d%f",&emp1.dept_code,&emp1.salary);
                  printf("\nDisplay employee information");
                  printf("\nEmploye Code = %d",emp1.emp_code);
                  printf("\nEmploye Name = %s",emp1.emp_name);
                  printf("\nEmployee Department = %d",emp1.dept_code);
                  printf("\nEmployee Salary =%f ",emp1.salary);
                  printf("\nEmployee Joining = ");
                  printf("%d-%d-%d",emp1.doj.day,emp1.doj.month,emp1.doj.year);
                  getch();
                  return 0;
                  }
                  
