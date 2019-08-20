//NO RETURN NO PARAMETER
#include<stdio.h>
#include<conio.h>
//void print();
int main()
{
    void print(); //function declaration
    print(); //function call
    printf("no parameter and no return type \n");
    print();
    getch();
    return 0;
}
void print() //called function
{
     for(int i=1;i<35;i++)
     printf("*");
     printf("\n");
    
     }
