#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;

ll a[20][20];

ll dx[] = {0,0,1,-1};
ll dy[] = {1,-1,0,0};

ll bfs(ll m ,ll n, ll row, ll col)
{
    bool vis[m][n];
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            vis[i][j] = false;
        }
    }

    if(!a[0][0])
    {
        return -1;
    }


    ll dis;
    queue< pair <pair <ll, ll> , ll > > q;
   pair < pair< ll , ll > , ll > p;

    q.push(make_pair(make_pair(0,0),0));

    while(!q.empty())
    {
        p = q.front();

        dis = p.second;

        if(p.first.first == row and p.first.second == col)
        {
            return dis;
        }

        q.pop();

        vis[p.first.first][p.first.second] = true;

        for(ll i =0;i<4;i++)
        {
            ll r = p.first.first+dx[i];
            ll c = p.first.second+dy[i];

            if(a[r][c] and !vis[r][c] and r >= 0 and r<=m and c >= 0 and c <= n)
            {
                q.push(make_pair(make_pair(r,c),dis+1));
            }
        }
    }

    return -1;

}



int main()
 {
	ll t;

	cin>>t;

	while(t--)
	{
	    ll m,n;
	    cin>>m>>n;

	    for(ll i =0 ;i<m;i++)
	    {
	        for(ll j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }

	    ll x,y;
	    cin>>x>>y;

	       cout<<bfs(m,n,x,y)<<endl;


 	}
	return 0;
}
