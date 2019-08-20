//TO FIND NUMBER IS ODD OR EVEN-USING IF ELSE STATEMENT
#include<conio.h>
#include<iostream.h>
int main()
{
    int n,c;
    printf("\n Enter a number ");
    scanf("%d",&n);
    c=n%2;
    if(c==0)
    printf("\n Number is even");
    else
    printf("\n Number is odd");
    getch();
}
