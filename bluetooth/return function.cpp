//TO ADD TWO NUMBERS USING FUNCTIONS
#include<stdio.h>
#include<conio.h>
 int sum(int,int);   /*declaring prototype of function*/
 main()
 {
  int a,b,c;
  printf("\n Enter the two numbers : ");
  scanf("%d  %d",&a,&b);    /* taking two numbers as input*/
  c = sum(a,b);      /* calling function,
                  //     *the value returned by the function is stored in c */
 // sum(a,b);//ACTUAL ARGUMENTS
  //sum(a,b);
  printf("\n The sum of two numbers is(IN MAIN) : %d ",c);
  getch();
 }//END OF MAIN PROGRAM

 int sum ( int num1,int num2)
 {
    //  printf("\n Enter the two numbers : ");
  //scanf("%d  %d",&a,&b);
  int result;  /* defining variable, its scope lies within function */
  result = num1 + num2 ;   /*adding two numbers*/
  printf("result is (IN FUNCTION) %d",result);
  return (result) ;     /* returning result */
 }
