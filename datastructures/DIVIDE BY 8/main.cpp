#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;
int main()
 {
     ll t;
     cin>>t;

     while(t--)
     {
         ll n;
         cin>>n;

         vector<ll> vi;

         while(n)
         {
            vi.pb(n%10);
            n /= 10;
         }

         bool check = false;


         sort(vi.begin(),vi.end());
         do
         {
             ll s = vi.size();


             for(ll i =0;i<vi.size();i++)
             {
                 cout<<vi[i];
             }
             cout<<endl;

             if(vi.size() >= 3)
             {
                 ll ans = vi[s-3]*100;
                  ans += vi[s-2]*10;
                  ans += vi[s-1];

                  if(ans%8 == 0)
                  {
                      check = true;
                      //break;
                  }
             }
             else if(vi.size() == 2)
             {
                 ll b = vi[s-2]*10;
                 b += vi[s-1];

                 if(b%8 == 0)
                 {
                     check = true;
                    // break;
                 }
             }
             else
             {
                 if(vi[0]%8 == 0)
                 {
                 check = true;
                // break;
                 }
             }

         }while(next_permutation(vi.begin(),vi.end()));


         if(check)
         {
             cout<<"Yes"<<endl;
         }
         else
         {
             cout<<"No"<<endl;
         }

     }
	return 0;
}
