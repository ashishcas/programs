#include<bits/stdc++.h>

using namespace std;


class Graph
{
     int V;

     list<int> *adj;
     //void DFSU(int v,bool visited[]);
 public:
      Graph(int V);
      void addedge(int v,int e);
      void BFS(int v);

};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];

}

void Graph::addedge(int v,int e)
{

    adj[v].push_back(e);
}

/*void Graph::DFSU(int v,bool visited[])
{
    visited[v] = true;
    cout<<v<<" ";

    list<int> :: iterator it;

    for(it = adj[v].begin();it != adj[v].end();it++)
    {
        if(visited[*it] == false)
            DFSU(*it,visited);

    }

}*/

void Graph::BFS(int V)
{

    bool *visited = new bool[V];

    for(int i=0;i<V;i++)
        visited[i] == false;

    list<int> queue;
     visited[V] = true;
     queue.push_back(V);

     list<int> ::iterator it;
     while(!queue.empty())
     {
         V = queue.front();
         cout<<V<<" ";
                  queue.pop_front();

         for(it = adj[V].begin();it != adj[V].end();it++)
         {
             if(visited[*it] == false)
             {

                 visited[*it] = true;
                 queue.push_back(*it);
             }
         }


     }
}

int main()
{
    Graph g(4);
     g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);


    cout<<"result"<<endl;
     g.BFS(2);
     cout<<endl;
     cout<<"result"<<endl;
      g.BFS(1);


    return 0;
}
