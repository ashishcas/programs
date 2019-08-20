#include<bits/stdc++.h>


#define lli long long int
#define st set<int>
#define  us unordered_set<int>
#define mp map<int,int>

using namespace std;

/*
int check(int arr[],int d[],int n)
{
    sort(arr,arr+n);
    sort(d,d+n);

    int pt = 1,ans =1 , i=1, j=0;

    while(i<n && j<n)
    {
        if(arr[i] < d[j])
        {
            pt++;
            i++;

            if(pt > ans)
            {
                ans = pt;
            }
        }
        else
        {
            pt--;
            j++;
        }
    }

    return ans;
}
*/
// Program to find minimum number of platforms
// required on a railway station
#include<iostream>
#include<algorithm>
using namespace std;

// Returns minimum number of platforms reqquired
int check(int arr[], int dep[], int n)
{
   // Sort arrival and departure arrays
   sort(arr, arr+n);
   sort(dep, dep+n);

   // plat_needed indicates number of platforms
   // needed at a time
   int plat_needed = 1, result = 1;
   int i = 1, j = 0;

   // Similar to merge in merge sort to process
   // all events in sorted order
   while (i < n && j < n)
   {
      // If next event in sorted order is arrival,
      // increment count of platforms needed
      if (arr[i] < dep[j])
      {
          plat_needed++;
          i++;

          // Update result if needed
          if (plat_needed > result)
              result = plat_needed;
      }

      // Else decrement count of platforms needed
      else
      {
          plat_needed--;
          j++;
      }
   }

   return result;
}


int main()
 {
     int n;
     cin>>n;
     while(n--)
     {
         int m;
         cin>>m;
         int a[m],d[m];
         for(int i=0;i<m;i++)
         {
             cin>>a[i];
         }
         for(int i=0;i<m;i++)
         {
             cin>>d[i];
         }

         cout<<check(a,d,m)<<endl;
     }
	return 0;
}
