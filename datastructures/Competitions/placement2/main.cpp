#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;
int main()
 {
	ll n,m;
    cin>>n;
     ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i] == 0)
            {
                a[i] = -1;
            }

        }
       ll b= 0;
       ll c = 0,sum = 0;
        for(int i=1;i<n;i++)
        {
            sum += a[i];
            b = max(a[i],sum-c);
            c = max(c,sum);
        }

        ll cnt = 0;
        for(ll i=0;i<n;i++)
        {

            if(a[i] == 1)
            {

                cnt++;
            }
        }
        cout<<cnt<<" "<<c<<' '<<cnt+c<<endl;

	return 0;
}
