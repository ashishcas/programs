//PROGRAM TO PERFORM LINEAR SEARCH
#include <stdio.h>
#include<conio.h>
 
int main()
{
   int array[100], search, i, n;
   printf("Enter total elements of an array\n");
   scanf("%d",&n);//ACTUAL SIZE OF AN ARRAY
   printf("Enter  elements of an array\n");
   for(i=0;i<n;i++)
   {
                   scanf("%d",&array[i]);//ENTERING ELEMENTS IN ARRAY
                   }
            printf("Enter element to be searched in an array\n"); 
            scanf("%d",&search);
           for(i=0;i<n;i++)
   {
                   
                   if( array[i]==search )
                   {
                   printf("Element found in location%d",i+1);
                   break;//SO THAT WHEN NUMBER FOUND OTHER LOOP IS NOT EXECUTED
                   }
                   }
                   if (i==n)
                   {
                        printf("Element  is not found in location");    
                        }
                        getch();
                        }
                     
