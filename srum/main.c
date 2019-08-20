#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void compare(char *k,char *l)
{
    char m[3],sum = 0;
    int i;
    for( i=0;i<4;i++)
    {
        m[i] = abs(k[i]-l[i]);
        sum = m[i]*m[i];
    }
    sum = sum/(char)4 ;
    printf("%s",sqrt(sum));
}
int main()
{
    string string1[100];
    string string2[100];
    gets(string1);
    gets(string2);


    compare(string1,string2);
    return 0;
}
