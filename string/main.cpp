#include <iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

template <class T>

string ToString(T thing)
{
  ostringstream oss;
  oss << thing;
  return oss.str();
}


string justNumbers(string st)
{
    string s;
     int num =0;
    // cout<<st.length();
    for(int i=0;i<st.length();i++)
    {
          //cout<<s;
        if((((int)(st[i])-'0') > 0) && (((int)(st[i])-'0')<= 9))
        {
            //cout<<i;
            //cout<<num;
            num *= 10;
            num +=  ((int)(st[i])-'0');
            cout<<num;
        }

    }
   return   s;

}
int main()
{
    string r = justNumbers("abc #1 23");
  // cout<<r;
    return 0;
}
