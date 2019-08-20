#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
long long int i,j,k,n,reverse=0,remainder,count=0,temp;

 scanf("%lld %lld %lld",&i,&j,&k);

   n = i;
while(n <= j)
{
reverse = 0;
temp = n;

while(n>0)
{
reverse = reverse * 10 + n%10;
n /= 10;
}
long long int l = abs(temp-reverse);
    if(l%k == 0)
    {
    count++;
}
 n++;
}
printf("%lld",count);
    return 0;
}
