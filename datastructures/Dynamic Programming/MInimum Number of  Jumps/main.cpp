#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;


ll solve(ll a[],ll n)
{
    ll jump[n];
    ll result[n];

    if(n == 0 || a[0] == 0)
     return -1;

     jump[0] = 0;

     for(ll i =1;i<n;i++)
        jump[i] = INT_MAX;

    for(ll i = 1;i<n;i++)
    {
        for(ll j =0;j<i;j++)
        {
            if(i <= j+a[j])
            {
               // jump[i] = min(jump[i],jump[j]+1);
               if(jump[i] > jump[j]+1)
               {
                   result[i] = j;
                   jump[i] = jump[j]+1;
               }
            }
        }
    }

    cout<<"jump: ";
    for(ll i=0;i<n;i++)
          cout<<jump[i]<<" ";

    cout<<endl;

    cout<<"result:  ";
    for(ll i = 1;i<n;i++)
        cout<<result[i]<<" ";


    return jump[n-1];
}



int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;

	    ll a[n];

	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    cout<<solve(a,n)<<endl;
	}
	return 0;
}
