#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a[3][3];
    int b[3];
    int x[3];
    for(int i =0;i<3;i++){
    for(int j =0;j<3;j++){
        cin>>a[i][j];
      }
    }

   for(int i =0;i<3;i++){
    for(int j =0;j<3;j++){
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }

    for(int i =0;i<3;i++){
        cin>>b[i];
    }

    //Upper Triangular matrix;\

    int n = 4;
    int c;

     for(int i =0;i<3;i++){
        x[i] = b[i]/a[i][i];
     }

     int j;
    for(int i = 2;i>=0;i--){
        int sum = 0;
        for(j = i+1;j<3;j++){
            sum += a[i][j]*x[j];
        }
        x[i] = (b[i]-sum)/a[i][j];
        cout<<sum<<" "<<x[i]<<endl;
    }

     for(int i =0;i<3;i++){
        cout<<x[i]<<endl;
     }
    return 0;
}
