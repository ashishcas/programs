#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>


using namespace std;


ll sumup(ll val)
{
       ll num = val;
     ll sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

     ll t;
     cin>>t;
     while(t--)
     {
          ll a,b;
          cin>>a>>b;
          ll ans = 0;
          for(ll i = a+1;i<=b;i++)
          {
              if(i<10)
               {
                    ans +=i;
               }
               else
               {
                    ans += sumup(i);
               }
             //  cout<<ans<<" ";

          }
          cout<<ans<<endl;
     }
    return 0;
}
