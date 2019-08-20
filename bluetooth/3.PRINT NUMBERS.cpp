#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5];
    int i;
printf("enter the number of elements");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    //printf("\n%d",a[i]);
}
printf("the elements are");
    for(i=0;i<5;i++)
    {
    
    printf("\n%d",a[i]);
}
    getch();
}
