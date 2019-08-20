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
