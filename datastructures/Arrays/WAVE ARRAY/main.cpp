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

	    ll a[n];

	    for(ll i = 0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    sort(a,a+n);

	    if(n%2 == 0 and n >0)
	    {
	        for(int i = 1;i <n;i += 2 )
	        {
	            ll temp = a[i-1];
	            a[i-1] = a[i];
	            a[i] = temp;
	        }
	    }
	    else if(n >0)
	    {
	         for(int i = 0;i <n;i++ )
	        {
	            cout<<i<<" ";
	            if(i<n and i+1 < n)
                {
	            ll temp = a[i];
	            a[i] = a[i+1];
	            a[i+1] = temp;
                }
	            i++;
	            cout<<i<<endl;
	        }
	    }


	    for(ll i =0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;

	}
	return 0;
}
