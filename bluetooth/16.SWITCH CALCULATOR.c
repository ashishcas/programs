#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,s;
    printf(" Enter any of your choice out of the following:\n");
    printf("To subtracrt press 1\n");
    printf("To add press 2\n");
    printf("To multiply press 3\n");
    printf("To divide press 4\n");
    scanf("%d",&s) ;
    printf("Enter any two numbers:\n");
    scanf("%d %d",&a,&b);
    switch(s)
     {
             case 1:
                  {
                     c=a+b;
                     printf("After adding these numbers sum is:%d",c);
                     break;
                     }
             case 2:
                  {
                     c=a-b;
                     printf("\nAfter Subtracting these numbers result is:%d",c);
                     break;
                     }
             case 3:
                  {
                     c=a*b;
                     printf("\nAfter Multiplying result for these numbers is:%d",c);
                     break;
                     }
             case 4:
                  {
                     c=a/b;
                     printf("\nAfter dividing these numbers result is:%d",c);
                     break;
                     }                    
             case 5:
                  {
                     c=a%b;
                     printf("\nAfter Dividing these numbers remainder is:%d",c);
                     break;
                     }
     }
    getch();
}                
