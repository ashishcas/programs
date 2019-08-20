#include <bits/stdc++.h>

using namespace std;


int min(int x,int y,int z)
{
    return(min(min(x,y),z));
}

int distance (string s1,string s2,int m,int n)
{
    if(m==0)
     return n;

     if(n==0)
      return m;

      if(s1[m-1] == s2[n-1])
      {
          return distance(s1,s2,m-1,n-1);
      }
      else
      return 1+min(distance(s1,s2,m,n-1),distance(s1,s2,m-1,n),distance(s1,s2,m-1,n-1));
}


int main() {
    int n;
    char s1[100],s2[100];
    cin>>n;
     while(n--)
     {
         int a,b;
         cin>>a>>b;
         for(int i =0;i<a;i++)
         std::cin>>s1[i];

         for(int j=0;j<b;j++)
         std::cin>>s2[j];
         cout<<distance(s1,s2,a,b);

     }
	return 0;
}
