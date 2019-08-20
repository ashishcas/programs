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
	     ll n;
	     cin>>n;

	     cout<<"0"<<" ";

	     queue<ll> q;
	     ll temp;

	     for(ll i = 1;i<=9 && i <=n;i++)
	     {
           q.push(i);

         while(!q.empty())
           {
        temp = q.front();

        q.pop();

        if(temp<=n)
        {
            cout<<temp<<" ";

            ll last = temp%10;

            if(last == 0)
            {
                q.push(temp*10+last+1);
            }
            else if(last == 9)
            {
                q.push(temp*10+last-1);
            }
            else
            {
                 q.push(temp*10+last-1);
                  q.push(temp*10+last+1);
            }

        }
            }
	     }


	     cout<<endl;

	     while(!q.empty())
	     {
	         q.pop();
	     }

	 }

	return 0;
}
