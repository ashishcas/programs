class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};

/*You are required to complete this method*/


bool dfs(int parent,int u, list<int> adj[],bool visited[])
{
    
    visited[u] = true;
    
    list<int> :: iterator it;
    
    for(it = adj[u].begin();it != adj[u].end();it++)
    {
        
        if(*it == parent)
        {
            continue;
        }
        if(visited[*it])
        {
            return true;
        }
        
        if(dfs(u,*it,adj,visited))
        {
            return true;
        }
        
    }
    
    return false;
    
    
    
    
}


bool Graph :: isCyclic()
{
        bool visited[V];
        
        for(int i =0;i<V;i++)
        {
            visited[i] = false;
        }
			
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i] )
            {
                if(dfs(-1,i,adj,visited))
                {
                return true;
                }
            }
        }
        return false;
}