#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

bool is_balanced(string s) {
    stack<char> st;

    for(int i =0;i<s.size();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if(!st.empty() && (s[i] == '(' || s[i] == '{' || s[i] == '['))
        {
            st.push(s[i]);
        }
        else
        {
            if(s[i] == '}')
            {
                char a = st.top();
                if(a == '{')
                    st.pop();
                else
                    return false;
            }
           else if(s[i] == ')')
           {
               char a = st.top();
               if(a == '(')
                   st.pop();
               else
                   return false;
           }
            else if(s[i] == ']')
            {
                char a = st.top();
                    if(a == '[')
                        st.pop();
                else
                    return false;

            }
        }
   }

    if(st.empty())
        return true;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
