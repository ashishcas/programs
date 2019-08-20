#include<bits/stdc++.h>
#define opt std::ios_base::sync_with_stdio(false)
#define lli		long long

#define rep(i,a,b)	for(i=a;i<b;i++)

#define vlli    vector<lli>
#define pb      push_back
using namespace std;

vlli V;
vlli Size;

void Initialize(lli N)
{
    lli i;

    rep(i,0,N+1)
    {
        V.pb(i);
        Size.pb(1);
    }
}

lli root(lli x)
{
    while(x != V[x])
    {
        x = V[V[x]];
    }

 return x;
}

void Union(lli x,lli y)
{
    lli root_x = root(x);
    lli root_y = root(y);

    if(Size[root_x] < Size[root_y])
    {
        V[root_x] = root_y;
        Size[root_y] += Size[root_x];
    }
    else
    {
        V[root_y] = root_x;
        Size[root_x] += Size[root_y];
    }
}

bool Find(lli x,lli y)
{
    if(root(x) == root(y))
    {
        return 1;
    }

 return 0;
}

int main()
{
    opt;

    lli N, M, i;
    cin >> N >> M;

    Initialize(N);



 return 0;
}
