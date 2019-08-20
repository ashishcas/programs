#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
     int a,b,c,x;
     float y,z;
     printf("enter three numbers:");
     x=scanf("%d%d%d",&a,&b,&c);
     y=(-b+sqrt(b*b-4*a*c))/(2*a);
     z=(-b-sqrt(b*b-4*a*c))/(2*a);
            if((b*b)>(4*a*c))
           {  
            printf("\nReal roots are :%f\n%f",y,z);
             }
             else 
             {
                  printf("\nRoots are imaginary");
                  }
                 getch();
    }
             
