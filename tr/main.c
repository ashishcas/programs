#include <stdio.h>
#include <stdlib.h>

int i,j;
void swap( int *a, int *b ) {

int temp;
temp = *a;
*a = *b;
*b = temp;

/* INSERT CODE HERE */

return ;

}

void transpose( int A[i][j], int r, int c ) {

for(i = 0;i<r;i++)
{
for(j=0;j<c;j++)
{
swap(&A[j][i],&A[i][j]);
}

}
/* INSERT CODE HERE. */

}

int main( int argc, char *argv[] ) {

int A[3][3] = { { 1, 2, 3 }, { 4, 5, 6 } , {7, 8, 9} } ;

int i, j ;

transpose( A, 3 , 3 ) ;
for ( i = 0 ; i < 3 ; i++ ) {

for ( j = 0 ; j < 3 ; j++ )
{

printf( "%4d ", A[i][j] ) ;

if(j == 2)
printf("\n\n");


}

}

return 0 ;

}

