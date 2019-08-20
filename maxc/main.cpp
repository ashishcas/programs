#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int a[10000];
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
            long long int max = a[i];
            for(int j=1;j<c;j++)
            {
                if(a[i+j]>max)
                {
                    max = a[i+j];
                }

            }
            cout<<max<<" ";
        }

    }
	//code
	return 0;
}
