#include<bits/stdc++.h>


#define ll long long

using namespace std;


bool check(string s)
{
    set<char> st;
     for(int i =0 ;i<s.length();i++)
     {
         if(st.find(s[i]) == st.end())
         {
             st.insert(s[i]);
         }
         else if(st.find(s[i]) != st.end())
         {
            return false;
         }

     }
     return true;

}


int main()
 {
 ll t;
 cin>>t;

 while(t--)
 {
     string s;
     cin>>s;


     set<char> st;

     ll ans = 0;
     ll count = 0;
     for(ll i =0 ;i<s.length();i++)
     {
       for(ll j =  i;j<=s.length();j++)
       {
           string str = s.substr(i,j-i);

           if(check(str))
           {

               ll len = str.length();
               ans = max(ans,len);

               cout<<str<<' '<<ans<<' '<<len<<endl;
           }
       }
     }


     cout<<ans<<endl;
 }
	return 0;
}
