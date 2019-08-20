/*


Given an unsorted array of non-negative integers, find a continuous sub-array which adds to a given number.

Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10

Output:
2 4
1 5


*/


#include<bits/stdc++.h>


#define lli long long int
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;

int check(int a[],int m,int s)
{
      int sum = a[0],start = 0;

        for(int i=1;i<=m;i++)
        {

           if(i<m)
             sum = sum+a[i];
           cout<<sum<<" first---"<<i<<endl;
          while(sum > s   && start < i )
          {
              sum  = sum - a[start];
              start++;
              cout<<"sum  "<<sum<<" start is"<<start<<" i is "<<i+1<<endl;
          }
          if(sum == s)
          {  //cout<<sum<<" ";
             cout<< start+1 <<" "<<i<<endl;
              return 1;
          }

           cout<<sum<<" second---"<<i<<endl;
        }

    return 0;
}


int main()
 {
    int n;
    cin>>n;
    while(n--)
    {
        int m,s;
        cin>>m>>s;
        int a[m];

        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }

      if( check(a,m,s) == 0)
      {
          cout<<-1<<endl;
      }
    }
	return 0;
}
