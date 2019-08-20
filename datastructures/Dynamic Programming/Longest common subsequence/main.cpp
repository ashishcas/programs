#include <bits/stdc++.h>

using namespace std;



int lcs(string &s1,string &s2)
{
    int m = s1.length();
    int n = s2.length();
    cout<<m<<n;

    int dp[m+1][n+1];

    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if( i == 0 || j == 0)
            {
                dp[i][j] = 0;
               // cout<<dp[i][j]<<"--"<<endl;
            }

          else if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);

                cout<<dp[i][j]<<" ";

        }
        cout<<endl;


    }
     /*   for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<dp[i][j]<<" ";

        }
        cout<<endl;
    }*/

    cout<<"length of lcs "<<dp[m][n]<<endl;


    string t = "";
    int index = dp[m][n];
    char lcs[index+1];
     int i=m,j=n;

     while(i>0 && j>0)
     {
         if(s1[i-1] == s2[j-1])
         {
             t += s1[i];
             lcs[index-1] = s1[i-1];
             i--;
             j--;
             index--;
         }
         else if(dp[i-1][j] > dp[i][j-1])
         {
             i--;
         }
         else
         {
             j--;
         }
     }
     cout<<lcs<<endl;
     return dp[m][n];

}





int main()
{
    string s1,s2;
    cin>>s1>>s2;
   cout<<lcs(s1,s2);
    return 0;
}
