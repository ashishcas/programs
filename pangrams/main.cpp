#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[26],count=0;
     string b;

    bool c = false;
    cin>>b;
    //s.push_back(b);
    for(int i=0;i<26;i++)
    {
        a[i] = 0;
    }

    for(int i=0;i<b.length();i++)
    {
        if(b[i]==' ')
            i++;
        continue;
         if(b[i]>='A' && b[i]<='Z')
           a[b[i]-'A']++;
    else
        a[b[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        cout<<a[i]<<endl;
        if(a[i] >0)
        {
            count++;

        }
        else
        {
            continue;
        }
    }
    if(count == 26)
    {
        cout<<"pangram";
    }
    else
        cout<<"not pangram";

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
