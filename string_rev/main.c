#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[100],temp;
     int i=0,j;
     gets(a);
     j = strlen(a)-1;
     while(i<j)
     {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
         i++;
         j--;
     }

    puts(a);
    return 0;
}
