#include<bits/stdc++.h>
#include<stdio.h>

#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;


// program for subset sum


bool checksum(ll a[],ll n,ll sum)
{

   ll s =0;
    bool dp[n+1][sum+1];

    for(ll i=0;i<=n;i++)
    {
      dp[i][0] = true;
    }

    for(ll i =1;i<=sum;i++)
    {

        dp[0][i] = false;
    }


for(ll i =1;i<=n;i++)
{

    for(ll j = 1;j<= sum;j++)
    {
        if(j-a[i-1] >= 0)
        {
            dp[i][j] = dp[i-1][j]||dp[i-1][j-a[i-1]];
        }
        else
        {
            dp[i][j] = dp[i-1][j];
        }
    }
}


cout<<"----matrix for subset sum----"<<endl;

for (int i = 0; i <= n; i++)
     {
       for (int j = 0; j <= sum; j++)
          printf ("%4d", dp[i][j]);
       printf("\n");
     }

 return dp[n][sum];
}


// program for partition of subset




bool check(ll a[],ll n)
{

    ll sum = 0;

    for(ll i =0;i<n;i++)
    {
        sum += a[i];
    }

    if(sum%2 != 0)
      return false;


    sum = sum/2;

    bool dp[n+1][sum+1];

    for(ll i=0;i<=n;i++)
          dp[i][0] = true;


    for(ll i = 1;i<= sum;i++)
    {
        dp[0][i] = false;
    }


    for(ll i =1;i<=n;i++)
    {
        for(ll j = 1; j<= sum;j++)
        {
            if(j-a[i-1] >= 0)
            {
                dp[i][j] = dp[i-1][j-a[i-1]]||dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}


int main()
 {
	ll t;
	cin>>t;//code
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];

	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    if(check(a,n))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }

	    ll sum;
	    cin>>sum;
	    if(checksum(a,n,sum))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }

	}
	return 0;
}



