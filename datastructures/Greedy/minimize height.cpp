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
	    ll k,n,b;
	    cin>>k>>n;

	    vector<int> a;

	    for(ll i =0 ;i<n;i++)
	    {
	        cin>>b;
	        a.push_back(b);
	    }

	    sort(a.begin(),a.end());

	    cout<<a[0]<<" "<<a[n-1]<<endl;
	   // a[0] = a[0]+k;
	    // a[n-1] = a[n-1]-k;
	    //cout<<a[0]<<" "<<a[n-1]<<endl;

	    cout<<a[n-1]-a[0]-2*k<<endl;
	}
	return 0;
}
