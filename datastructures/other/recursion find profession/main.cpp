#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;


string find(ll lev,ll pos)
{

    if(lev == 1)
    {
        return   "Engineer";
    }

    if(find(lev,(pos+1)/2) == "Doctor")
    {
        if(pos%2 == 0)
        {
            return "Doctor";
        }
        else
        {
            return "Engineer";
        }
    }


    if(pos%2 == 0)
    {
        return "Engineer";
    }
    else
    {
        return "Doctor";
    }



}





int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll lev,p;
	    cin>>lev>>p;

	    cout<<find(lev,p)<<endl;
	}
	return 0;
}
