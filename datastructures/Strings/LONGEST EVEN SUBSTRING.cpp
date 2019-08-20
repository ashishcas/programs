#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int> 
#define  us unordered_set<int> 
#define mp map<int,int> 

using namespace std;

ll find(string s)
{
     ll n = s.length();
     ll res[n+1];
     res[0] = 1;
     
     for(ll i = 1 ;i<=n;i++)
     {
          res[i] = (res[i-1]+s[i-1]-'a');
     }
     
    ll ans = 0;
     
     for(ll k = 2 ; k<= n ; k+= 2)
     {
          for(ll i = 0 ; i <= n-k;i++)
          {
             ll j = i+k-1;
               
               if(res[i+k/2]-res[i]  == res[i+k]-res[i+k/2])
               {
                    ans = max(ans,k);
               }
          }
     }
     
     return ans;
}

int main()
 {
	 ll t;
     cin>>t;
     while(t--)
     {
          string s;
          cin>>s;
          cout<<find(s)<<endl;
     }
	return 0;
}