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

	    ll n = 4;
	    ll a[n][n];
	    for(ll i =0;i<n;i++)
	    {
	        for(ll j =0 ;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }


	    bool visited[5][5];
	    for(ll i =0 ;i<n;i++)
	    {
	        for(ll j = 0; j<n;j++)
	        {
	            visited[i][j] = false;
	        }
	    }

	    bool right = 0,left = 0,top = 0 ,bottom = 0;

	    ll i =0,j=0;

	    ll m = 4;

	    while(i<m && j <n)
	    {
	        for(ll idx = j ;idx<n;idx++)
	        {
	            cout<<a[i][idx]<<" ";
	        }
	        i++;

	        for(ll idx = i ;idx<m;idx++)
	        {
	            cout<<a[idx][n-1]<<" ";
	        }
	        n--;

	        if(i <m)
	        {
	            for( ll idx = n-1 ;idx >=j ;idx--)
	            {
	                cout<<a[m-1][idx]<<" ";
	            }
	            m--;
	        }

	        if(j<n)
	        {
	            for(ll idx = m-1 ; idx >= i ;idx--)
	            {
	                cout<<a[idx][j]<<" ";
	            }
	            j++;
	        }

	    }
	    cout<<endl;
	}
	return 0;
}
