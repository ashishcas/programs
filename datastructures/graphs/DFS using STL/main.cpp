#include <bits/stdc++.h>

#define ll long long

using namespace std;


vector< ll > adj[100];
 vector<bool> vis(20,false);


 void addEdge(ll a, ll b)
 {

     adj[a].push_back(b);
    adj[b].push_back(a);
     // for undirected graph
    // adj[b].pb(a);


 }

 void DFSutil(ll u)
 {

     vis[u] = true;
     cout<<u<<"----"<<endl;

     for(ll i = 0;i<adj[u].size();i++)
     {

         if(!vis[i])
         {
             DFSutil(adj[u][i]);
         }
     }
 }

void DFS(ll u)
{
    DFSutil(u);

}

int main()
{
        ll a,b;
     ll v,e;
     //cin>>v;
   addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(2, 0);
    addEdge(2, 3);
    addEdge(3, 4);


   DFS(2);
    return 0;
}
