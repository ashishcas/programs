#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i,j,n=100000000000;
    int flag;
        char c;
    for(i = 1;i<=n;i++){
        flag = 1;
        if(i > 1){
        for(j =2;j<=i-1;j++){
         if(i%j == 0){
            flag = 0;
            break;
         }

        }
        if(flag == 1){
        printf("%d is prime \n",i);
        }
        }
    }
    return 0;
}
