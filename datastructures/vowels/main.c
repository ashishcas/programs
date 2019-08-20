#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    char array[100],freq[100],count[100];
    for(i = 0 ;i<100;i++){
        freq[i] = 0;
    }
    printf("Enter the Length of Array \n");
    scanf("%d",&n);
    for(i =0 ; i <n;i++){
     scanf("%d",&array[i]);
    }

    for(i =0;i<n;i++){
        freq[array[i]]++;
    }

    for(i =0;i<100;i++){
        printf("%d ",freq[i]);
    }

    return 0;
}
