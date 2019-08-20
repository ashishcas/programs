#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	char a[1000],b,c,d;
	cin>>n;
	while(n--)
	{
	    cin>>a;
	    stack<char> s;
	    for(int i=0;i<strlen(a);i++)
	    {
	        if(a[i] == '(' || a[i] == '[' || a[i] == '{')

	        {
	            s.push(a[i]);
	        }
	        else if(a[i] == ')' || a[i] == ']' || a[i] == '}')
	        {
	           switch(a[i])
	           {
	               case ')':
	                          b = s.top();
	                              s.pop();
	                              if( b == '{' || b == '[')
	                              {
	                                  cout<<"not balanced"<<endl;
	                                  break;
	                              }
	              case  '}':
	                           c = s.top();
	                              s.pop();
	                               if(c == '(' || c== '[')
	                               {
	                                   cout<<"not balanced"<<endl;
	                                  break;

	                               }
	            case ']':
	                         d = s.top();
	                         s.pop();
	                         if(d =='(' || d == '{')
	                         {
	                             cout<<"not balanced"<<endl;
	                                  break;
	                         }
	           }
	        }
	       else if(s.empty())
	    {
	        cout<<"balanced"<<endl;
	    }

	    }

	}//code
	return 0;
}
