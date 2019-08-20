#include<bits/stdc++.h>


#define lli long long int
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;


int checklis(vector<int> &a)
{
    int n = a.size();
    vector<int> lis(n,1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<lis[i]<<endl;
    }


    for(int i =1;i<n;i++)
    {
        for(int  j = 0;j<i;j++)
        {
            if( a[i] > a[j] && lis[i] < lis[j]+1)
            {

                lis[i] = lis[j]+1;
                cout<<lis[j]<<" "<<lis[i]<<" "<<i<<endl;

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
	return 0;
}
