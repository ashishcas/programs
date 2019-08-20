#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;

ll x[8] = {-2,-1,1,2,-2,-1,1,2};
ll y[8] = {-1,-2,-2,-1,1,2,2,1};

ll bfs(ll sx,ll sy,ll dx,ll dy,ll n)
{

    bool visited[n+1][n+1];

    for(ll i =0;i<=n;i++)
    {
        for(ll j =0;j<=n;j++)
        {
            visited[i][j] = false;
        }
    }

    queue< pair< pair<ll,ll>,ll> > q;
     pair< pair<ll,ll>,ll> p;

    ll dis;

    q.push(make_pair(make_pair(sx,sy),0));

    while(!q.empty())
    {



        p = q.front();

        dis = p.second;

        cout<<p.first.first<<" "<<p.first.second<<endl;

        if(p.first.first == dx && p.first.second == dy)
        {
            cout<<dx<<" "<<dy<<endl;
            return dis;
        }

        q.pop();

        visited[p.first.first][p.first.second] = true;

        for(ll i=0;i<8;i++)
        {

            if(p.first.first+x[i] > 0 && p.first.first+x[i] <= n &&
                p.first.second+y[i] > 0 && p.first.second+y[i] <= n
                && !(visited[p.first.first+x[i]][p.first.second+y[i]]))
                {
                    q.push(make_pair(make_pair(p.first.first+x[i],p.first.second+y[i]),p.second+1));
                    //cout<<p.first.first+x[i]<<" "<<p.first.second+y[i]<<" "<<p.second+1<<endl;
                }
        }

    }
    return 1;


}





int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,sx,sy,dx,dy;
	    cin>>n>>sx>>sy>>dx>>dy;
	    cout<<bfs(sx,sy,dx,dy,n)<<endl;
	}
	return 0;
}
