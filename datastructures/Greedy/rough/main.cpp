
#include <bits/stdc++.h>
using namespace std;

vector<long long int> v;


int main()
{

    int t;
    cin>>t;

    char s[t],str,ch;

    for(int i=0;i<t;i++)
    cin>>s[i];

    ch = s[0];
    int id = 0;
    for(int i=1;i<t;i++)
    {
        if((int)(s[i])>(int)(ch))
        {
            ch = s[i];
            id = i;
        }
    }


    for(int j = id;j<t;j++)
    {

        cout<<s[j];
    }

    return 0;

}

