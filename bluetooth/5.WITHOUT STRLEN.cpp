//PROGRAM TO CALCULATE WITHOUT STRLEN
#include<conio.h> 
#include<stdio.h> 
//using namespace std;
int main() 
{ 
char a[20]; 
int i,count =0;
printf("enter string=");
gets(a); 
i=0; 
while(a[i]!='\0') 
{
count++;
i++; 
}
printf("length of string is=");
printf("%d",count);
getch(); 
}
