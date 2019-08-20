#include<iostream>

using namespace std;

int main()
{
     string str;
     int count =0,i=0,j=0;
     cout<<"Please enter one word:";
     cin>>str;
     while(str[i] != '\0')
     {
         if((str[i] >= 'a' && str[i] <= 'z' )|| (str[i] >= 'A' && str[i] <= 'Z'))
         {
             count++;
         }

         i++;
     }
     cout<<endl;
     cout<<"There  are "<<count<<" characters in "<<str;
       return 0;
}
