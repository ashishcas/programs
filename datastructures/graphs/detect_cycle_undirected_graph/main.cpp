#include <bits/stdc++.h>

using namespace std;


struct Edge
{

    int src,dest;
};


struct Graph
{
    int V,E;


    Edge *edge;

};

Graph *createGraph(int V,int E)
{
    Graph *graph = (Graph*)malloc(sizeof(Graph));
    graph->V = V;
    graph->E = E;

    graph->edge = (Edge*)malloc(graph->E *sizeof(Edge));

    return graph;
}

int Find(int parent[],int i)
{
    if(parent[i] == -1)
        return i;

    return Find(parent,parent[i]);
}



void Union(int parent[],int x,int y)
{
    int xset = Find(parent,x);
    int yset = Find(parent,y);

    cout<<"union is called"<<endl;
   // cout<<xset<<"---"<<yset<<endl;

    parent[xset] = yset;
    cout<<"parent of"<<xset<<"-"<<yset<<endl;
}


int isCycle(Graph *graph)
{

    int *parent = (int *)malloc(graph->V *sizeof(int));
    memset(parent,-1,sizeof(int)*graph->V);

    for(int i=0;i<graph->E;++i)
    {

        int x = Find(parent,graph->edge[i].src);
        int y = Find(parent,graph->edge[i].dest);


        cout<<graph->edge[i].src<<"-"<<x<<" "<<graph->edge[i].dest<<"-"<<y<<endl;

        if( x == y)
            return 1;

        Union(parent,x,y);
    }
    return 0;
}




int main()
{
     /* Let us create following graph
         0
        |  \
        |    \
        1-----2 */
    int V = 3, E = 3;
    struct Graph* graph = createGraph(V, E);

    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;

    // add edge 1-2
    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;

    // add edge 0-2
    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;

    if (isCycle(graph))
        printf( "graph contains cycle" );
    else
        printf( "graph doesn't contain cycle" );

    return 0;
}
