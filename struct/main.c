#include<stdio.h>
main (){
          int *p ;
          int a=1, b=2, c=3;
          int d[ 5 ]={1,2,3,4,5};
          p= &c;
          printf("p = %d \n",p);                          // What is the value of p ?                               [ Select ]                          ["0", "3", "1", "2"]
          b=c++;
          printf("c = %d \n",c);                          // What is the value of c ?                               [ Select ]                          ["1", "3", "4", "2"]
         d[ 2 ]=++b;
         printf("d[2]=%d \n",d[2]);                                               // What is the value of d[2] ?                               [ Select ]                          ["2", "3", "1", "4"]             , What is the value of b?                               [ Select ]                          ["4", "2", "3"]
          p= d+3;
          printf("p = %d \n",p);                                              // What is the value of p ?                               [ Select ]                          ["4", "3", "null", "undefined"]
          b+= (c++);
          printf("b = %d \n",b);                                         // What is the value of b ?                               [ Select ]                          ["2", "4", "3", "8"]              , What is the value of c?                              [ Select ]                          ["Null", "3", "5", "4"]
         return 0;
}
