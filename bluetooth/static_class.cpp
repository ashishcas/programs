#include<stdio.h>
#include<conio.h>
main( )
{
void increment();      
increment( );
increment( ) ;
increment( ) ;
increment();
increment();
getch();
}
 void increment( ) 
{//int i=1;
static int i;//default value is zero
//static int i=1;
//i=1;
printf ( "%d\n", i ) ;
i = i + 1 ;

}
