
#include <bits/stdc++.h>
using namespace std;
#define MAX 100
vector<string> printPath(int m[MAX][MAX], int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;

	int m[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}

	vector<string> res = printPath(m,n);
	for(int i=0;i<res.size();i++)
	cout<<res[i]<<" ";
	cout<<endl;
}
	return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The function returns a sorted array of strings which represents
the directions mouse will take to reach the destination.
You are required to complete the below method. */
bool isvalid(int i,int j,int n)
{
    if(i<0 ||i>=n ||j<0||j>=n )
     return false;
     else
     return true;
}



void checkpath(int m[MAX][MAX],bool visited[MAX][MAX],int r,int c,int n, string path,vector<string> &v)
{

    cout<<r<<" "<<c<<"--"<<path<<endl;
    if(r == n-1 && c == n-1)
    {
        v.push_back(path);
        return;
    }

   if(r <0 || r>=n || c <0 || c>=n || visited[r][c])
    {
        return;
    }

    visited[r][c] = true;
    if(r-1 >=0 && r-1 <n && c >= 0 && c<n && visited[r-1][c] == false && m[r-1][c] == 1)
    {
        path += "U";
        checkpath(m,visited,r-1,c,n,path,v);
        path.pop_back();
    }

    if(r >=0 && r <n && c+1 >= 0 && c+1 <n&& !visited[r][c+1] && m[r][c+1])
    {
        path += "R";
        checkpath(m,visited,r,c+1,n,path,v);
        path.pop_back();
    }

    if(r+1 >=0 && r+1 <n && c >= 0 && c<n && !visited[r+1][c] && m[r+1][c])
    {
        path += "D";
        checkpath(m,visited,r+1,c,n,path,v);
        path.pop_back();
    }
        if(r>=0 && r <n && c-1 >= 0 && c-1<n && !visited[r][c-1] && m[r][c-1])
    {
        path += "L";
        checkpath(m,visited,r,c-1,n,path,v);
        path.pop_back();
    }

    visited[r][c] = false;

}


vector<string> printPath(int m[MAX][MAX], int n)
{
    bool visited[MAX][MAX];

    for(int i =0;i<MAX;i++)
    {
        for(int j = 0;j<MAX;j++)
        {
            visited[i][j] = false;
        }
    }

    vector<string> v;
    string path = "";
    checkpath(m,visited,0,0,n,path,v);
    sort(v.begin(),v.end());
   // cout<<v<<" ";
    return v;

}
