#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count;
    long long int a[100000];
    cin >> n;
    for(int arr_i = 0;arr_i < n;arr_i++){
        {
            cin >> a[arr_i];
        }
        sort(a,a+n);
      int b =a[n-1];
        while(b>0)
        {
            count =0;
            int c =a[0];
            for(int i=0;i<n;i++)
            {
                while(a[i]>0)
                {
                    count++;
                    a[i] = a[i]-c;
                }
            }
            cout<<count<<endl;
            sort(a,a+n);
            b = a[n-1];
        }
    return 0;

}
}
