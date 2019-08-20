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
	    ll n,k;
	    
	    cin>>n;
	    cin>>k;
	    
	    ll a[n];
	    
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    //sort(a,a+n);
	    
	    ll ans = INT_MAX;
	    ll count,temp;
	    
	    for(ll i = 0;i<n;i++)
	    {
	        
	        count = 0;
	       temp = a[i];
	        
	        for(ll j = 0;j<n;j++)
	        {
	            if(a[j] < temp)
	            {
	                count += a[j];
	            }
	            if(a[j] > (k+temp))
	            {
	                count += a[j]-temp-k;
	            }
	        }
	        
	        ans = min(ans,count);
	    }
	    
	   cout<<ans<<endl;
	}
	return 0;
}