#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f


class Graph
{
    int V;

    list< pair<int,int> > *adj;

public:
    Graph(int V);
    void addEdge(int u,int v,int w);
    void shortest(int src);

};

Graph::Graph(int V)
{
    this->V = V;
  // adj = new list< pair< int,int > >[V];
 adj = new list< pair<int, int> >[V];
}

void Graph::addEdge(int u,int v,int w)
{
    adj[u].push_back(make_pair(v,w));
     adj[v].push_back(make_pair(u,w));
}

void Graph::shortest(int src)
{
    vector<int> dis(V,INF);

    set< pair<int,int> > setds;

    setds.insert(make_pair(0,src));
    dis[src] = 0;

    while(!setds.empty())
    {
        pair<int,int> tmp = *(setds.begin());

        setds.erase(setds.begin());

        int u = tmp.second;
        cout<<"u--"<<u<<endl;

        list< pair<int,int> >:: iterator it;

        for(it = adj[u].begin();it != adj[u].end();it++)
        {
            int v = (*it).first;
            int w = (*it).second;

            if(dis[v]> dis[u]+w)
            {

                if(dis[v] != INF  )
                {

                    setds.erase(make_pair(dis[V],v));
                }

                dis[v] = dis[u]+w;
                setds.insert(make_pair(dis[v],v));


            }
           // cout<<(*it).first<<" "<<(*it).second<<endl;
            cout<<v<<"v-----dis[v]"<<dis[v]<<endl;
        }
        cout<<"end_for-----"<<endl;



    }

     for(int i=0;i<V;i++)
        {
            cout<<i<<"    "<<dis[i]<<endl;
        }
}


int main()
{
    int V = 9;
    Graph g(V);

    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.shortest(0);

    return 0;
}
