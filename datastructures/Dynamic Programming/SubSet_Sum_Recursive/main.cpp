#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;


bool check(ll a[],ll n,ll sum)
{
    if( sum == 0)
    return true;

    if(n == 0 && sum != 0)
      return false;

      if(a[n-1] > sum)
        return check(a,n-1,sum);

        return check(a,n-1,sum)||check(a,n-1,sum-a[n-1]);


}


int main()
 {
	ll t;
	cin>>t;//code
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n],sum = 0;;

	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum += a[i];
	    }
	    if(sum%2 != 0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        if(check(a,n,sum/2))
	        {
	            cout<<"YES"<<endl;
	        }
	    }
	}
	return 0;
}
