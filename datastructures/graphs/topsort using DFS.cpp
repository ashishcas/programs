
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
enum { WHITE, GRAY, BLACK };

void dfs(vector<int>g[],int u, vector<int> &color, vector<int> &r)
{
    color[u]=GRAY;
    
    for(auto v : g[u])
    {
        if(color[v]==WHITE)
        {
            dfs(g,v,color,r);
        }
    }
    
    color[u]=BLACK;
    r.push_back(u);
}
/* You need to complete this function */
int * topoSort(vector<int> graph[], int N)
{
    vector<int> color(N,WHITE);
    vector<int> r;
    
    for(int i=0; i<N; ++i)
    {
        if(color[i]!=WHITE) continue;
        dfs(graph,i,color,r);
    }
    
    reverse(r.begin(),r.end());
    int *fr = new int[N];
    for(int i=0; i<N; ++i) fr[i]=r[i];
    return fr;
    
   // Your code here
}