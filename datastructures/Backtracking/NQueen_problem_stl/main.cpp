#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>

using namespace std;

bool safe(ll row,ll col,map<ll,ll> mp)
{
    map<ll,ll> :: iterator it;

    for(it = mp.begin();it != mp.end();it++)
    {
        if(it->second == row || it->first == col)
        {
          return false;
         }
        else if(it->first-it->second == col-row || it->first+it->second == col+row)
        {
            return false;
        }

    }
    return true ;

}




void nqueen(ll col,ll n,map<ll,ll> mp,vector< map < ll,ll > > &vm)
{

    if(col > n)
      return;

      for(ll row = 1;row<=n;row++)
      {
          if(safe(row,col,mp))
          {
              mp[col] = row;


          if(col == n && mp.size() == n)
          {
              vm.push_back(mp);
          }

          nqueen(col+1,n,mp,vm);
         // cout<<col<<" "<<mp[col]<<endl;
          mp.erase(col);
          // cout<<col<<" "<<mp[col]<<endl;

          }
      }

}


int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;

	    map<ll,ll> mp;
	    vector<map <ll,ll> > vm;

	    nqueen(1,n,mp,vm);

	    if(vm.size() == 0)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        sort(vm.begin(),vm.end());
	        for(ll i = 0;i<(int)vm.size();i++)
            {
                map<ll,ll>::iterator it;
                cout<<"[";
                for(it = vm[i].begin();it != vm[i].end();it++)
                    cout<<it->second<<" ";
                cout<<"] ";
                cout<<endl;
            }
            cout<<endl;
	    }


	}
	return 0;
}
