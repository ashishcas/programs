#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};
*/
/*You are required to complete this method*/


bool dfs(list<int> adj[],int u, bool grey[],bool black[])
{

    grey[u] = true;

    list<int> :: iterator it;

    for(it = adj[u].begin();it != adj[u].end();it++)
    {
        if(black[*it])
        {
            continue;
        }
        if(grey[*it])
        {
            return true;
        }

        if(dfs(adj,*it,grey,black))
        {
            return true;
        }
    }
    grey[u] = false;
    black[u] = true;

    return false;

}
