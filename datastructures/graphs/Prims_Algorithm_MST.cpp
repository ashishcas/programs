#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair < ll , ll >

vector< pll > adj[10001];
bool vis[10001];
ll dis[10001];
ll ve,e;


ll prim(ll s){
    
    ll minCost = 0,cost;
   priority_queue< pll , vector< pll > ,greater< pll > > q;
   q.push({0,s});
   
   while(!q.empty()){
       pll p = q.top();
       q.pop();
    
       cost = p.first;
       ll x = p.second;
       if(!vis[x]){
           vis[x] = 1;
           minCost += cost;
          for(ll i =0;i<adj[x].size();i++){
            
            ll y = adj[x][i].first;
            ll w = adj[x][i].second;
            
            if(!vis[y]){
                q.push({w,y});
            }
                 
           }
       }
       
       
   }
   
    return minCost;
}





int main()
{
   
    cin>>ve>>e;
    ll u,v,w;
    for(ll i =0;i<e;i++){
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    cout<<prim(1)<<endl;
}