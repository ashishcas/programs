#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin>>n;
    while(n--)
    {
        int count=0;
        cin>>s;
        for(int i=1;i<s.length();i++)
        {

            for(int j=0;j<i;j++)
            {
                if(s[j] != s[i])
                {
                    count++;
                    cout<<count<<endl;
                }
                else
                {
                    continue;
                }
        }

        }
        cout<<count<<endl;
    }
	//code
	return 0;
}
