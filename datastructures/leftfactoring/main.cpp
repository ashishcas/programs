#include<bits/stdc++.h>

#define SIZE 10

using namespace std;





int main()
{
string a,a1,a2,a3,a4,a5;
int i,j=0,k,l;
printf("enter any productions A->");
cin>>a;
//cout<<a;
for(i=0;a[i]!='/';i++,j++)
{
a1 += a[i];


}

for(j=++i;a[j]!='\0';j++)
{
a2 += a[j];
}
k=0;
l=0;
//cout<<a1<<" " <<a2<<endl;
for(i=0;i<a1.length()||i<a2.length();i++)
{
if(a1[i]==a2[i])
{
a3 += a1[i];
k++;
}
else
{
a4 +=a1[i];
a5 +=a2[i];
l++;
}}

a3 += 'D';

a4 += '/';


a4.append(a5);


cout<<"A -> "<<a3<<endl;
cout<<"D -> "<<a4<<endl;
 string s,t;

s = "A->";
s.append(a3);
 t = "D->";
t.append(a4);


return 0;
}
