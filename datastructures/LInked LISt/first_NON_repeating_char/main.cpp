#include<bits/stdc++.h>


\

using namespace std;
int main()
 {
   int n,m;
   cin>>n;
   char c,a[1000];
   while(n--)
   {
       char freq[26];
       for(int i=0;i<26;i++)
       {
           freq[i] = 0;
       }
       cin>>m;
       queue<char> q;
       for(int i=0;i<m;i++)
       {
           cin>>a[i];
           q.push(a[i]);
           freq[a[i] - 'a']++;
           while(q.empty() == false)
           {
               if(freq[q.front()-'a'] > 1)
               {
                   q.pop();
               }
               else
               {
                   cout<<q.front()<<" ";
                   break;
               }
           }
           if(q.empty())
            cout<<"-1 ";

       }
       cout<<endl;

    }
	return 0;
}
