#include <stdio.h>
#include<conio.h>
int main()
{
   int sum=0,num;
   do             /* Codes inside the body of do...while loops are at least executed once. */
   {                                    
        printf("Enter a number\n");
        scanf("%d",&num);
        sum+=num;      
   }
   while(num!=10);
   printf("sum=%d",sum);
return 0;
}
