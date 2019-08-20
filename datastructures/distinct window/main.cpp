#include<bits/stdc++.h>




#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;
int main()
 {
	 ll n;
	 cin>>n;
	 while(n--)
	 {
	     string s,str;
	     cin>>str>>s;

	     ll cnt = 0;
	     ll freq[26] = {0};

	     for(ll i =0;i<s.length();i++)
	     {

	         freq[s[i]-'a']++;
	     }
	     ll second[26] = {0};
	     ll count = 0, start = 0;
	     ll len,start_idx=-1;
	     ll  ans= INT_MAX;
	     for(ll i =0;i<str.length();i++)
	     {
	       second[str[i]-'a']++;


	        if(freq[str[i]-'a'] != 0 and second[str[i]-'a'] <= freq[str[i]-'a'])
	        {

	            count++;
	        }

	        if(count == s.length())
	        {
	            while(second[s[start]-'a'] > freq[s[start]-'a'] || freq[s[start]-'a'] == 0)
	            {
	                second[s[start]]--;
	                start++;
	            }
	            len = i-start+1;
	            if(ans > len)
	            {
	                ans = len;
	                start_idx = start;
	            }
	        }

	     }
	     if(start_idx == -1)
	     {
	         cout<<"-1"<<endl;
	     }

	     else
	     {
	         cout<<str.substr(start_idx,len);
	     }
	 }
	return 0;
}

