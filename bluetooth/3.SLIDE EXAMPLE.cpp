#include<stdio.h> 
#include<conio.h>
int main()
{
int num,*intptr;
float x,*fptr;
char c, *cptr;
 num=123;x=12.34;
 c='a';
 intptr=&num;
cptr=&c;
fptr=&x; 
printf("Num %d stored at address %u\n",*intptr,intptr); 
printf("Value %f stored at address %u\n",*fptr,fptr); 
printf("Character %c stored at address %u\n",*cptr,cptr);
 }
