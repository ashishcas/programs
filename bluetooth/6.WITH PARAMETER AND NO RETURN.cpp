//WITH PARAMETER WITH NO RETURN VALUE
//WITH PARAMETER AND NO RETURN
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    void sum(int,int);
    
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
    getch();
    return 0;
}
void sum(int a,int b)
{
     int z;
     z=a+b;
     printf("sum is = %d",z);
     }
     
