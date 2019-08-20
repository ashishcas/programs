#include <bits/stdc++.h>

using namespace std;

int main()
{

	char str[50],str1[50];
	int length;
	cout<<"enter string:"<<endl;
	gets(str);
	length=strlen(str);
	//int k = strlen(str);
	for(int i=0; i<length; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
		str[i]=='o' || str[i]=='u' || str[i]=='A' ||
		str[i]=='E' || str[i]=='I' || str[i]=='O' ||
		str[i]=='U')
		{
			for(int j=i; j<length; j++)
			{
				str[j]=str[j+1];
			}
		length--;
		}
	}                  // copying string into anorther string
	strcpy(str1,str);
	strcat(str1,str);
	cout<<"string after deleting vowels and double the consonants is : ";
	cout<<str1;
	return 0;
}
