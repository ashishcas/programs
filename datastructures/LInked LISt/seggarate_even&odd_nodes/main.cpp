#include<bits/stdc++.h>


using namespace std;
int main()
 {
     int n;
     cin>>n;
     while(n--)
     {
         vector<int> a,b;
         int c,m;
         cin>>m;

         for(int i=0;i<m;i++)
         {
             cin>>c;
             if(c%2 == 0)
             {
                 a.push_back(c);
             }
             else
             {
                 b.push_back(c);
             }
         }
         for(int i=0;i<a.size();i++)
              cout<<a[i]<<" ";

         for(int i=0;i<b.size();i++)
               cout<<b[i]<<" ";

               a.clear();
               b.clear();
               cout<<endl;

     }
	return 0;
}
