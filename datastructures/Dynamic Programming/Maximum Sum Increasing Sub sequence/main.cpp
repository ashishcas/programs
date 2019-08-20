/*
Given an array of n positive integers. Write a program to find
the sum of maximum sum subsequence of the given array such that
 the integers in the subsequence are sorted in increasing order.




Input:
2
7
1 101 2 3 100 4 5
4
10 5 4 3

Output:
106
10



*/


#include<bits/stdc++.h>


#define lli long long int
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;


int checklis(vector<int> &a)
{
    int n = a.size();
    vector<int> lis(n,0);

    for(int i=0;i<n;i++)
    {
        lis[i] = a[i];
    }



    for(int i =1;i<n;i++)
    {
        for(int  j = 0;j<i;j++)
        {
            if( a[i] > a[j] && lis[i] < lis[j]+a[i])
            {
//cout<<lis[j]<<" "<<lis[i]<<endl;
                lis[i] = lis[j]+a[i];

            }
        }
    }

    int ans =0;
  for(int i=0;i<n;i++)
  {
      if(ans<lis[i])
      {
          ans = lis[i];
      }
  }

//cout<<char(*ans);

    return ans;

}





int main()
 {
     int m;
     cin>>m;
     while(m--)
     {
	int n;
	vector<int> v;
	cin>>n;
	int b;
	while(n--)
    {
        cin>>b;
        v.push_back(b);
    }
    cout<<checklis(v)<<endl;
     }
	return 0;
}
