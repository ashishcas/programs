#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>


using namespace std;



vector< ll > adj[20];
 vector<bool> vis;


 void addEdge(ll a, ll b)
 {

     // for directed graph

     adj[a].push_back(b);
      adj[b].push_back(a);
     // for undirected graph
    // adj[b].pb(a);


 }




 void bfs(ll u)
 {

     queue<ll> q;

     q.push(u);

     vis[u] = true;

     while(!q.empty())
     {

         ll p = q.front();
         q.pop();

         cout<< p <<"----------"<<endl;


       // vector< vector < ll > > :: iterator i;

        // for( vector< vector < ll > > :: iterator it = adj[p].begin() ; it != adj[p].end(); it++)

         for(ll it = 0; it < adj[p].size();it++)
         {
             if(vis[it] == false )
             {
                 q.push(it);
                 vis[it] = true;
             }

         }

     }


 }


int main()
{

    ll v,e;

    cin>>v>>e;

    vis.assign(v, false);
    //adj.assign(v, vector<ll>());

    ll a,b;

    for(ll i=0;i<e;i++)
    {

        cin>>a>>b;
        addEdge(a,b);
    }


    for(ll i =0;i<v;i++)
    {

        if(!vis[i])
        {
            bfs(i);
        }
    }
    return 0;
}

