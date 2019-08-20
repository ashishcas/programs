#include<stdio.h>
#include<conio.h>
 int main( )
{ void increment();
      increment( ) ; 
      increment( ) ; 
      increment( ) ;
      getch();
      }
     void increment( ) 
{ 
      auto int i = 1 ; 
printf ( "%d\n", i ) ;
i=i+1;
getch();
}
