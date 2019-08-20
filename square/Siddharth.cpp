/*I MAY NOT GET THE SUCCESS IMMEDIATELY BUT I WILL GET IT FOR SURE*/
#include<bits/stdc++.h>
#define opt std::ios_base::sync_with_stdio(false)
#define I int
#define li		int32_t
#define lli		long long
#define ulli unsigned long long

#define pn			 printf("\n")
#define nl			 cout<<'\n'
#define sf(N)        scanf("%lld",&N)
#define pf(N)        printf("%lld",N)
#define sf1(N1,N2)    scanf("%lld %lld",&N1,&N2)
#define pf1(N1,N2)    printf("%lld %lld",N1,N2)
#define sf2(N1,N2,N3) scanf("%lld %lld %lld",&N1,&N2,&N3)
#define pf2(N1,N2,N3) printf("%lld %lld %lld",N1,N2,N3)

#define sl          cout<<' '
#define ps          printf(" ")

#define rep(i,a,b)	for(i=a;i<b;i++)
#define repr(i,a,b)	for(i=a;i>b;i--)
#define elif		else if
#define mset(a,b)	memset(a,b,sizeof(a))

#define pb		push_back
#define pob		pop_back
#define itr		iterator
#define sz()	size()
#define szof    sizeof
#define lb		lower_bound
#define ub		upper_bound
#define mp		make_pair
#define vlli    vector<lli>
#define plli	pair<lli,lli>
#define vplli	vector<plli >
#define F   	first
#define S		second
#define Dup     erase(unique(V.begin(),V.end()),V.end())

#define bs      binary_search
#define ub      upper_bound
#define lb      lower_bound

#define ALL(V)  V.begin(),V.end()

#define MX1     100000
#define MX2     1000000
#define Inf     1000000000000000
#define mod		1000000007
using namespace std;

lli a[102][102];
bool visited[102][102];
lli Count[MX1+1];

lli Power(lli a,lli b)
{
    lli result=1;

    while(b)
    {
        if(b%2)
        {
            result=(result*a)%mod;
        }

        b=b>>1;
        a=(a*a)%mod;
    }

 return result;
}

int main()
{
    opt;

    /*#ifndef ONLINE_JUDGE
    freopen("double_squares.txt","r",stdin);
    freopen("double_squares_out.txt","w",stdout);
    #endif // ONLINE_JUDGE*/

    lli H,W,i=1,j=1;
    cin>>H;

	W = H;

	vlli V;
	rep(i,0,H*W){
		lli x;
		cin >> x;

		V.pb(x);
	}

	sort(V.begin(),V.end());

    char ch='R';

    rep(i,0,H+2)
    {
        rep(j,0,W+2)
        {
            visited[i][j]=1;
        }
    }

    rep(i,1,H+1)
    {
        rep(j,1,W+1)
        {
            visited[i][j]=0;
        }
    }

    lli cnt=0;

    i=1,j=1;

    while(cnt<H*W)
    {
        a[i][j]=V[cnt];

        cnt++;
        visited[i][j]=1;

        if(ch=='R')
        {
            if(visited[i][j+1])
            {
                i++;
                ch='D';
            }
            else
            {
                j++;
            }
            continue;
        }

        if(ch=='D')
        {
            if(visited[i+1][j])
            {
                j--;
                ch='L';
            }
            else
            {
                i++;
            }
            continue;
        }

        if(ch=='L')
        {
            if(visited[i][j-1])
            {
                i--;
                ch='U';
            }
            else
            {
                j--;
            }
            continue;
        }

        if(ch=='U')
        {
            if(visited[i-1][j])
            {
                j++;
                ch='R';
            }
            else
            {
                i--;
            }
            continue;
        }
    }

    rep(i,1,H+1)
    {
        rep(j,1,W+1)
        {
            cout<<a[i][j]<<' ';
        }
        nl;
    }




 return 0;
}
