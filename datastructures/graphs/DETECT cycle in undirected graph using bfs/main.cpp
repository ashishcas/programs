#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>
#define pb push_back

#define M  1001

using namespace std;



vector<ll> adj[M];
vector<bool> visited(M,false);
ll parent[M];


bool checkcycle()
{

    parent[1] = 0;

    queue<ll> q;
    q.push(1);


    while(q.empty())
    {

        ll u = q.front();
        q.pop();


        for(ll i=0;i<adj[u].size();i++)
        {

            ll v = adj[u][i];

            if(parent[v] == u)
            {
                continue;
            }
            else if(visited[v])
            {
                return true;
            }
            parent[v] = u;
            visited[v] = true;
            q.push(v);
        }
        return false;
    }



}

int main()
{

    ll V , E;
    cin>>V>>E;

    for(ll i=0;i<E;i++)
    {
        ll x,y;
        cin>>x>>y;

         adj[x].push_back(y);
         adj[y].push_back(x);
    }


    if(checkcycle())
    {
        cout<<"CYCLE IS PRESENT"<<endl;
    }
    else
    {
        cout<<"NO CYCLE IS PRESENT"<<endl;
    }

    return 0;
}


