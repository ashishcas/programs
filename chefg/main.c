#include <stdio.h>
int main(void)
{
char a[10];
int b,c;
while(1)
{
    gets(a);
    scanf("%d%d",&b,&c);
    if(a == 'add')
         printf("%d",b+c);
}
}
