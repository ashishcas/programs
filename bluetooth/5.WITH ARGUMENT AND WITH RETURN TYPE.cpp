//WITH PARAMETER WITH RETURN VALUE
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int sum(int,int); //function declaration
    
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    int c=sum(a,b); //function call
    printf("sum is= %d",c);
    getch();
    return 0;
}
int sum(int a,int b) //function defination
{
int c;
     c=a+b;
     return(c);
     //return(z);
     }
     
