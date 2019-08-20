//PROGRAM TO SHOW IMPORTANCE OF BREAK STATEMENT
#include<conio.h>
#include<stdio.h>
main()
{
      int i=2;
      switch(i)
      {
               case 1:printf("Its CASE 1...\n");
               case 2:
                    printf("Its CASE 2...\n");
                    case 3:printf("its CASE 3...");
                    default :
                            printf("/n I am Default");
                            }
                            getch();
                            }
