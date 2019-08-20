#include<bits/stdc++.h>


#define ll long long
#define pb push_back
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;


bool check(ll n)
{
    ll d=0,rev=0,num;
	 num = n;

	while(num != 0)
    {
        d = num%10;
        rev = rev*10+d;
        num /= 10;
    }

    if(n == rev)
    {

        return true;
    }
    else
    {

        return false;
    }
}

ll checkpalindrome(ll a)
{


    ll diff1 = INT_MAX,diff2=INT_MAX;

    ll f = a-1,s= a+1;

    while(!check(f))
    {
        f--;
    }


    while(!check(s))
    {
        s++;
    }


    if(abs(a-f)<abs(a-s))
    {
        return f;
    }
    else
    {
        return s;
    }

}


int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;

	    cout<<checkpalindrome(a)<<endl;
	}
	return 0;
}
