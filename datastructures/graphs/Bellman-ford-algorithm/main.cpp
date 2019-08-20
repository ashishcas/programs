#include <bits/stdc++.h>

using namespace std;


struct Edge
{
    int src,dst,w;
};

struct Graph
{

    int V,E;

    struct Edge *edge;
};

 Graph *createGraph(int V,int E)
{
    Graph *graph = new Graph;
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[E];

    return graph;
}


void print(vector<int> dis)
{

    for(int i=0;i<dis.size();i++)
    {
        cout<<i<<"       "<<dis[i]<<endl;
    }
}


void bellmanford(Graph *graph,int src)
{
    int V = graph->V;
    int E = graph->E;

    vector<int> dis(V,INT_MAX);

    dis[src] = 0;

    for(int i=0;i<V-1;i++)
    {
        for(int j=0;j<E;j++)
        {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dst;
            int w = graph->edge[j].w;

            if(dis[u] != INT_MAX && dis[v] > dis[u]+w)
            {
                dis[v] = dis[u]+w;
            }
        }
    }

    for(int j=0;j<E;j++)
    {

          int u = graph->edge[j].src;
            int v = graph->edge[j].dst;
            int w = graph->edge[j].w;

            if(dis[u] != INT_MAX && dis[v] > dis[u]+w)
            {
                cout<<"negative cycle"<<endl;
               // dis[v] = dis[u]+w;
            }
    }
    print(dis);

}



int main()
{
    /* Let us create the graph given in above example */
    int V = 5;  // Number of vertices in graph
    int E = 8;  // Number of edges in graph
    struct Graph* graph = createGraph(V, E);

    // add edge 0-1 (or A-B in above figure)
    graph->edge[0].src = 0;
    graph->edge[0].dst = 1;
    graph->edge[0].w = -1;

    // add edge 0-2 (or A-C in above figure)
    graph->edge[1].src = 0;
    graph->edge[1].dst = 2;
    graph->edge[1].w = 4;

    // add edge 1-2 (or B-C in above figure)
    graph->edge[2].src = 1;
    graph->edge[2].dst = 2;
    graph->edge[2].w = 3;

    // add edge 1-3 (or B-D in above figure)
    graph->edge[3].src = 1;
    graph->edge[3].dst = 3;
    graph->edge[3].w = 2;

    // add edge 1-4 (or A-E in above figure)
    graph->edge[4].src = 1;
    graph->edge[4].dst = 4;
    graph->edge[4].w = 2;

    // add edge 3-2 (or D-C in above figure)
    graph->edge[5].src = 3;
    graph->edge[5].dst = 2;
    graph->edge[5].w = 5;

    // add edge 3-1 (or D-B in above figure)
    graph->edge[6].src = 3;
    graph->edge[6].dst = 1;
    graph->edge[6].w = 1;

    // add edge 4-3 (or E-D in above figure)
    graph->edge[7].src = 4;
    graph->edge[7].dst = 3;
    graph->edge[7].w = -3;

    bellmanford(graph, 0);
    return 0;
}
