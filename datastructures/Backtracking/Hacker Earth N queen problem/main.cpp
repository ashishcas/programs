

/*
You are given a 10X10 chessboard with a knight on coordinate (I,J). You have to find the number of blocks on the chessboard that the knight can be at in exactly N moves.


The knight can move from its positon in the diagram to all the coordinates marked by X in the following diagram in one move.
 For the 10X10 chessboard  is the top-left corner, is the top-right corner and  is the bottom-right corner.


*/



#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;

ll x[8] = {-2,-1,1,2,-2,-1,1,2};
ll y[8] = {-1,-2,-2,-1,1,2,2,1};

ll bfs(ll sx,ll sy,ll m)
{
      bool visited[11][11];

    for(ll i =0;i<=10;i++)
    {
        for(ll j =0;j<=10;j++)
        {
            visited[i][j] = false;
        }
    }

    queue< pair< pair<ll, ll>, ll > > q;
     pair< pair<ll , ll> ,ll> p;



    q.push(make_pair(make_pair(sx,sy),0));
    ll count = 0,cl = 0;


    while(!q.empty())
    {


      // cout<< q.size()<<" "<<endl;
        p = q.front();
         q.pop();

       ll ax,ay,c;
        ax = p.first.first;
        ay = p.first.second;
        c = p.second;


       if(ax <= 0 || ay <= 0 || ax >10 || ay >10 ||  visited[ax][ay])
       {
           continue;
       }


       if(c == m)
       {
           count++;
           visited[ax][ay] = true;
       }


     if(c < m)
     {
        for(ll i =0;i<8;i++)
        {

            q.push(make_pair(make_pair(ax+x[i],ay+y[i]),c+1));
        }
     }
    }
    return count;


}




int main()
 {


	    ll sx,sy,m;
	    cin>>sx>>sy>>m;
	    cout<<bfs(sx,sy,m)<<endl;

	return 0;
}
