#include <bits/stdc++.h>

using namespace std;


int f(int k,int  n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
        i *= k;
    }

    return sum;
}


int simplestSum(int k, int a, int b) {

    int ans  =0;

    for(int i =a;i<=b;i++)
    {
        ans += f(k,i);
    }

    return ans;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int k;
        int a;
        int b;
        cin >> k >> a >> b;
        int result = simplestSum(k, a, b);
        cout << result << endl;
    }
    return 0;
}
