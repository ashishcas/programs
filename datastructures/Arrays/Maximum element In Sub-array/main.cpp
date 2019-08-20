/*


Given an array and an integer k, find the maximum for each and every contiguous subarray of size k

Input:
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13

Output:
3 3 4 5 5 5 6
10 10 10 15 15 90 90

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
     int a[1000];
    cin>>n;
    while(n--){
        int b,c;
        cin>>b>>c;
        for(int i=0;i<b;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<=b-c;i++)
        {
           int max = a[i];
            for(int j=1;j<c;j++)
            {
                if(a[i+j]>=max)
                {
                    max = a[i+j];
                }

            }
             cout<<max<<" ";
        }
        cout<<endl;

    }
	//code
	return 0;
}
