#include <bits/stdc++.h>
using namespace std;

bool left(int a[],int k)
{
    bool c ;
    for(int i=0;i<=k;i++)
    {
        if(a[i]<=a[k])
        {
            c = true;
        }
        else
        {
            return false;
        }
    }
    //cout<<c;
    return c;
}
bool right(int a[],int k,int m)
{
    bool c ;
    for(int i = k;i<m;i++)
    {
        if(a[k] < a[i])
        {
            c = true;
        }
        else
        {
            c = false;
        }
    }
    //cout<<c;
    return c;
}

int main() {
    vector<int> a;
    int b;
    int m,n;
    cin>>n;
    while(n--)
    {
       // bool g,h;
        //int ans =0,b =0;
        cin>>m;
            for(int i=0;i<m;i++)
              {
                cin>>b;
               a.push_back(b);
              }


          for(int i=1;i<m-1;i++)
          {
              int min = std::min_element(a[i],a[m-1]);
              int max  = std::max_element(a[0],a[i]);
              cout<<min<<max;
          }


    }

	//code
	return 0;
}
