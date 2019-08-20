#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
string a,b;
while(n--)
{
    cin>>a>>b;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
   if(a.compare(b)== 0)
   {
       cout<<"YES";
   }
   else
   {
     cout<<"NO";
   }
}
//code
	return 0;
}
