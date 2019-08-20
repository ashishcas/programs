#include<stdio.h>
#include<conio.h>
//using namespace std;
struct employee
{
       int emp_code;
       char emp_name[20];
       int dept_code;
       };
       int main()
       {
           void display(employee);
           employee emp1={101,"raj",5};
           printf("\nemployee details");
           display(emp1);
           getch();
           }
           void display(employee e)
           {
  printf("\nemployee code:%d",e.emp_code);
   printf("\nemployee name:%s",e.emp_name);
   printf("\ndept code:%d",e.dept_code);
                }
       
