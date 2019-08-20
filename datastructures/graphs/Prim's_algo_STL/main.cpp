#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define pt pair<int,int>

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
    //   priority_queue <Type, vector<Type>, ComparisonType > min_heap;

    priority_queue< pt , vector< pt > ,greater< pt > >pq;
    vector<int> key(V,INF);

   // set< pair<int,int> > setds;

    vector<int> parent(V,-1);

    vector<bool> mst(V,false);

    pq.push(make_pair(0,src));
    key[src] = 0;

    while(!pq.empty())
    {


        int u = pq.top().second;

        pq.pop();

        cout<<"u--"<<u<<endl;

        mst[u] = true;

        list< pair<int,int> >:: iterator it;

        for(it = adj[u].begin();it != adj[u].end();it++)
        {
            int v = (*it).first;
            int w = (*it).second;


                if( mst[v] == false && key[v] > w  )
                {
                    key[v] = w;
                    pq.push(make_pair(key[v],v));
                    parent[v] = u;
                }


           // cout<<(*it).first<<" "<<(*it).second<<endl;
            cout<<v<<"v-----dis[v]"<<key[v]<<endl;
        }
        cout<<"end_for-----"<<endl;



    }

          cout<<"node       parent"<<endl;
     for(int i=0;i<V;i++)
        {
            cout<<i<<"    "<<parent[i]<<endl;
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
