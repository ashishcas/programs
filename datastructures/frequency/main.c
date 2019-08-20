#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , a[100],freq[100],i,j;
     for(j = 0 ;j<100;j++){
         freq[j] = 0;
     }
    scanf("%d",&n);
    for(i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n;i++){
        freq[a[i]]++;
    }

    for(j = 0 ;j<100;j++){
    printf("%d ",j);
     printf("%d \n",freq[j]);

    }
    return 0;
}
