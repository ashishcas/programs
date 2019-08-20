#include <bits/stdc++.h>


using namespace std;


int main() {
     long long int a[1000],b[1000];
    int n;
    int m,count=0;
    cin >> n >> m;

    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }

    sort(a,a+n);
    sort(b,b+m);
    long long int i,c,d;
    if(n==1)
    {
        c = a[0];
    }
    else
    {
    c =a[n-1];
    }
    d = b[0];
    for( i = c;i<=d;i++)
    {
        if(i%c== 0 && d %i==0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }

    cout << count << endl;
    system("pause");
    return 0;
}
