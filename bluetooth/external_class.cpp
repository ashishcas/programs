#include<stdio.h>
#include<conio.h>

//int i=6;
main( )
{int i=6;
printf ( "\ni = %d", i ) ;
void increment();
void decrement();
increment( ) ;
increment( ) ;
decrement( ) ;
decrement( ) ;
getch();
}
int i=6;
 void increment( )
{
i = i + 1 ;
printf ( "\non incrementing i = %d", i ) ;
}
 void decrement( )
{
i = i - 1 ;
printf ( "\non decrementing i = %d", i ) ;
//getch();
}


