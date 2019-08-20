#include<bits/stdc++.h>

using namespace std;


class Graph
{
     int V;

     list<int> *adj;
     void topou(int v,bool visited[],stack<int> &s );
 public:
      Graph(int V);
      void addedge(int v,int e);
      void toposort();

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

void Graph::topou(int v,bool visited[],stack<int> &s)
{
    visited[v] = true;
   // cout<<v<<"-- "<<endl;

    list<int> :: iterator it;

    for(it = adj[v].begin();it != adj[v].end();it++)
    {
        if(visited[*it] == false)
           topou(*it,visited,s);

    }

    s.push(v);
}

void Graph::toposort()
{
    stack<int> s;
    bool *visited = new bool[V];

    for(int i=0;i<V;i++)
        visited[i] == false;

    for(int i=0;i<V;i++)
    {
        if(visited[i] == false)
        topou(i,visited,s);
    }
    //U(V,visited);

    while(!s.empty())
    {
        std::cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    Graph g(6);
     g.addedge(5, 2);
    g.addedge(5, 0);
    g.addedge(4, 0);
    g.addedge(4, 1);
    g.addedge(2, 3);
    g.addedge(3, 1);


    cout<<"result"<<endl;
     g.toposort();
     //cout<<"result"<<endl;
      //g.DFS(1);


    return 0;
}
