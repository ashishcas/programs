#include<bits/stdc++.h>

#define ll long long int
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>
using namespace std;
int main()
 {
     ll t,b;
     cin>>t;
     vector<ll> vi,vt;


     while(t--)
     {
         cin>>b;

         while(b>0)
         {
             if(b>1000)
             {
                 b = b-1000;
                 vi.push_back(1000);
             }
            else if(b>500)
             {
                 b = b-500;
                 vi.push_back(500);
             }
             else if(b>100)
             {
                 b = b-100;
                 vi.push_back(100);
             }
             if(b>50)
             {
                 b = b-50;
                 vi.push_back(50);
             }
             else if(b>10)
             {
                 b = b-10;
                 vi.push_back(10);
             }
             else if(b>5)
             {
                 b = b-5;
                 vi.push_back(5);
             }
             else if(b>2)
             {
                 b = b-2;
                 vi.push_back(2);
             }
             else if(b>1000)
             {
                 b = b-1;
                 vi.push_back(1);
             }
         }

         for(int i=0;i<vi.size();i++)
         {
             cout<<vi[i]<<" ";
         }
         cout<<endl;

     }

	return 0;
}
