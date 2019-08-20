//PROGRAM TO SHOW HOW TO ACCESS ELEMENTS OF NESTED STRUCTURE
#include<stdio.h>
#include<conio.h>
struct first
{
       int a;
       float b;
       };
       struct second
       {
              int c;
              struct first f;
              };
              main()
              {
                    struct second s[3];
                    int i;
                    printf("\nEnter the values(int,int,float) :\n");
                    for(i=0;i<2;i++)
                    scanf("%d%d%f",&s[i].c,&s[i].f.a,&s[i].f.b);
                    s[2]=s[1];
                    for(i=0;i<2;i++)
                    printf("\n%d\t%d\t%f",s[i].c,s[i].f.a,s[i].f.b);
                    getch();
                    }
