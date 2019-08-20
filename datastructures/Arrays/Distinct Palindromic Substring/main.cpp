/*
Given a string of lowercase ASCII characters, find all distinct continuous palindromic sub-strings of it.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a string.

Output:
Print the count of distinct continuous palindromic sub-strings of it.

Constraints:
1<=T<=10^5
1<=length of string<=10^5

Example:
Input:
2
abaaa
geek

Output:
5
4


*/







#include<bits/stdc++.h>


using namespace std;

int main()
 {
	int n;
	cin>>n;
	while(n--)
	{
	    string s,s1;
	    cin>>s;
	    set<string> st;
	    int count =0;

	    for(int i=0;i<s.length();i++)
	    {
	        for(int j =i ;j<s.length();j++)
	        {
	            s1 = s.substr(i,j-i+1);
	            string s2 = s1;

	            reverse(s2.begin(),s2.end());
	            if(s2 == s1)
	            {
	                cout<<s2<<endl;
	                st.insert(s2);
	                count++;
	            }
	        }
	    }
	    cout<<st.size()<<endl;
	    st.clear();
	}
	return 0;
}
