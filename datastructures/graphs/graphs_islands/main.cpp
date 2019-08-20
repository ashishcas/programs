
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
static int x[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    static int y[] = {-1,  0,  1, -1, 1, -1, 0, 1};


bool check(int row,int col,int N,int M)
{
    if(row >=0 && row < N && col >=0 && col < M)
    {
        return true;
    }
    return false;
}



void dfs(int A[MAX][MAX],int xi,int yi,bool visited[MAX][MAX],int N,int M)
{


    visited[xi][yi] = true;


    for(int i=0;i<8;i++)
    {
        cout<<xi+x[i]<<" "<<yi+y[i]<<" "<<A[xi+x[i]][yi+y[i]];
        if(!visited[xi+x[i]][yi+y[i]] && A[xi+x[i]][yi+y[i]] && check(xi+x[i],yi+y[i],N,M))
        {
            dfs(A,xi+x[i],yi+y[i],visited,N,M);
        }
        cout<<endl;
    }



}




int findIslands(int A[MAX][MAX], int N, int M)
{
    bool visited[MAX][MAX];

    for(int i=0;i<N;i++)
    {
        for(int j =0;j<M;j++)
        {
            visited[i][j] = false;
        }
    }


   int cnt = 0;


   for(int i =0;i<N;i++)
   {
       for(int j =0;j<M;j++)
       {
           cout<<i<<" "<<j<<endl;
           if(A[i][j] && !visited[i][j])
           {
               cout<<"YES";
               dfs(A,i,j,visited,N,M);
               cnt++;
           }
       }


   }

      return cnt;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	int A[MAX][MAX];
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		memset(A,0,sizeof A);
		for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
		cin>>A[i][j];
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*you are required to complete this method*/




//int x[8] = {0,0,1,1,1,-1,-1,-1 };
//int y[8] = {-1,1,0,1,-1,-1,1,0};

