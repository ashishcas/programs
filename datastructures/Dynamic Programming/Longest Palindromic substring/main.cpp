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
	     string s;
	     cin>>s;

	     ll n = s.length();

	     bool dp[n+1][n+1] = {0};

	       string str;

         bool one = false;
	     for(ll i =0;i<n;i++)
	     {
	         dp[i][i] = true;
	         if(!one)
	         {
	             str = s[i];
	             one = 1;
	         }
	     }

	    ll slen = 1;
        bool two = false,three = false;
	    for(ll i = 0 ;i<n-1;i++)
	    {
	        if(s[i] == s[i+1])
	        {
	            dp[i][i+1] = true;
	            slen = 2;
                if(two == false)
                {
	            str = s.substr(i,2);
	            two = true;
	            cout<<str<<" "<<two<<endl;
                }
	        }
	    }

	    for(ll k = 3; k<=n;k++)
	    {
	        for(ll i = 0 ;i<n-k+1;i++)
	        {
	            ll j = i+k-1;

	            if(dp[i+1][j-1] && s[i] == s[j])
	            {
	                 dp[i][j] = true;
	                if(k >slen)
	                {
	                    slen = k;
	                   str = s.substr(i,k);

	                }
	            }
	        }
	    }


	     cout<<str<<endl;
	 }
	return 0;
}
