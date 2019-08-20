
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{

double A[5][5];
int n = 3;

//taking input matrix
    for(int i =0;i<3;i++){
       for(int j =0;j<3;j++){
        cin>>A[i][j];
      }
    }

//taking augmented matrix
    for(int i =0;i<n;i++){
        cin>>A[i][n];
    }

//printing matrix
       for(int i =0;i<3;i++){
    for(int j =0;j<=3;j++){
        cout<<A[i][j]<<"  ";
        if(j == n-1){
            cout<<" | ";
        }
      }
      cout<<endl;
    }

//gussian elimination method
    for (int i=0; i<n; i++) {
        // Search for maximum in this column
        double maxEl = abs(A[i][i]);
        int maxRow = i;
        for (int k=i+1; k<n; k++) {
            if (abs(A[k][i]) > maxEl) {
                maxEl = abs(A[k][i]);
                maxRow = k;
            }
        }

        // Swap maximum row with current row (column by column)
        for (int k=i; k<n+1;k++) {
            double tmp = A[maxRow][k];
            A[maxRow][k] = A[i][k];
            A[i][k] = tmp;
        }

        // Make all rows below this one 0 in current column
        for (int k=i+1; k<n; k++) {
            double c = -A[k][i]/A[i][i];
            for (int j=i; j<n+1; j++) {
                if (i==j) {
                    A[k][j] = 0;
                } else {
                    A[k][j] += c * A[i][j];
                }
            }
        }
    }

    //printing matrix
    cout<<"Printing Upper Triangular Matrix"<<endl;
       for(int i =0;i<3;i++){
    for(int j =0;j<=3;j++){
        cout<<A[i][j]<<"  ";
        if(j == n-1){
            cout<<" | ";
        }
      }
      cout<<endl;
    }


    // Solve equation Ax=b for an upper triangular matrix A
    double x[n];
    for (int i=n-1; i>=0; i--) {
        x[i] = A[i][n]/A[i][i];
        for (int k=i-1;k>=0; k--) {
            A[k][n] = A[k][n] - ( A[k][i] * x[i]);
        }
    }


    cout<<"values of x are :"<<endl;
    for(int i =0;i<3;i++){
        cout<<x[i]<<" ";
    }

    return 0;
}
