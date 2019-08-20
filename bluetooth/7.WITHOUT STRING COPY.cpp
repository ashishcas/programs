#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[10],bh[10];
	int i=0;
	printf("enter string=");
	gets(ch);
	while(ch[i]!='\0')
	{
		bh[i]=ch[i];	
        i++;
	}
    printf("\ncopied string is=");
    //bh[i]='\0';
	puts(bh);
	
getch();
}
