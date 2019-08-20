#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
   ll  t;
   cin>>t;

   while(t--)
   {
     ll a,b,k,n;

     cin>>n;

     if(n<=3)
     {
     cout<<n<<endl;
     }
     else
     {
         ll m;

        // cout<<k<<endl;
         if((n+1)%4 == 0)
         {
             k = (n+1)/4 ;
         a = 2*k;
         b = 2*k-1;
         }
         else
         {
            k  = (n+1)/4 ;
         a = 2*k+1;
         b = 2*k;
         }


        //cout<<a<<" "<<b<<endl;
         cout<<a+b<<endl;
      }

      }

      return 0;
  }

