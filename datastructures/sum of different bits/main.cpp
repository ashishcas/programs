#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;


void bin(ll n,vector<ll> &v)
{
	/* step 1 */
	if (n > 1)
		bin(n/2,v);

	/* step 2 */
	v.push_back(n%2);
}


ll check(ll a,ll b)
{
    vector<ll> f;
    vector<ll> s;

    bin(a,f);
    bin(b,s);


    ll k = 0;

    for(ll i =0;i<f.size();i++)
    {
        cout<<f[i];
    }
    cout<<endl;

    for(ll i =0;i<s.size();i++)
    {

        cout<<s[i];
    }
    cout<<endl;
    for(ll i=0;i<f.size();i++)
    {
        if(f[i] != s[i])
        {
            k++;
        }
    }

    return k;
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
          ll cnt = 0;

          for(ll i=0;i<n;i++)
          {
              cin>>a[i];
          }

          for(ll i =0;i<n-1;i++)
          {
              for(ll j = i+1;j<n;j++)
              {
                  cnt += check(a[i],a[j]);
              }
          }
                cout<<2*cnt<<endl;
      }



	return 0;


}
