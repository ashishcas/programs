#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;


    for(int i =  1 ;i<=n;i++){
         int m = i;
         int j  = i;

         while(m >=1){

                cout<< m<<' ';
                m--;
            }

            while(m <= 1){
                m++;
            }

            while(m <=i and i !=1 and m != 1){
                cout<<m<<' ';
                m++;
            }
            cout<<endl;
         }

    return 0;
}
