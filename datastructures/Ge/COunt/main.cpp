#include <bits/stdc++.h>

using namespace std;

int countWays(int A,int B){
    int f[A+1];
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;


    while(B > 0){
      for(int i =3;i<=A and B > 0;i++){
            f[i] = f[i-3]+f[i-2]+f[i-1];
            //cout<<f[i]<<"
        }
        B--;
    }

    for(int i =3;i<=A;i++){
            f[i] = f[i-2]+f[i-1];
            //cout<<f[i]<<" ";
        }


    return f[A];

}

int main()
{
    int A,B;
    cin>>A>>B;

    cout<<countWays(A,B);
    return 0;
}
