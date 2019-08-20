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
        ll m,n;
        cin>>m>>n;
         vector< pair < int , int  > > adj[n];

        for(ll i =0;i<n;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
             adj[v].push_back(make_pair(u,w));
        }

        int s;
        cin>>s;
           bool vis[n] = {0};
    int dis[n] = {INT_MAX};

    queue< pair < int , int > > sp;

    sp.push(make_pair(0,s));
    dis[s] = 0;
    while(!sp.empty())
    {
        pair < int , int > p = sp.front();
        sp.pop();

        int x = p.first;
        int y = p.second;
         //vector < pair< int , int >  > :: iterator it;
        for( auto it = adj[y].begin(); it != adj[y].end();it++)
        {
            int v = it->first;
            int w = it->second;
            if(dis[v] > dis[y]+w)
            {
                dis[v] = dis[x]+w;
                sp.push(make_pair(dis[v],v));
            }
        }
    }


    }
    return 0;
}
