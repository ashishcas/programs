/*

Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
Input:
1
5
3 2 4 6 5
Output:
Yes


*/
#include<bits/stdc++.h>



using namespace std;
int main()
 {
    set<int> s;
	int m,n;
	cin>>m;
	while(m--)
	{
	    int a[1000];
	    cin>>n;
	    for(int i=0;i<n;i++)
	     {
	         cin>>a[i];
	         a[i] = a[i]*a[i];
	         s.insert(a[i]);
	     }
	   bool c = false;
	   //int sum =0;
	   for(int i=0;i<n-1;i++)
	   {
	       for(int j=i+1;j<n;j++)
	       {
	           if(s.find(a[i]+a[j]) != s.end())
	           {
	               c = true;
	               //cout<<"Yes"<<endl;
	               break;
	           }
	       }


	   }
	   s.clear();
	   if(!c)
	      cout<<"No"<<endl;
	      else
	       cout<<"Yes"<<endl;

	}
	return 0;
}
