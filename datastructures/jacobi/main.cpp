
#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int i,j,m,n = 3,l;
    float x[10],a[10][10],b[10],c[10];
        cout<<"Enter the matrix : \n";
    for(i=0;i<n;i++) {
        x[i]=0;
        for(j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    cout<<"\nEnter the solution matrix : \n";
    for(i=0;i<n;i++) {
        cin>>b[i];
    }
    cout<<"\nEnter the number of iterations : \n";
    cin>>l;


    m=1;
    while(1){
    for(i=0;i<n;i++) {
        c[i]=b[i];
        for(j=0;j<n;j++) {
            if(i!=j) {
                c[i]=c[i]-a[i][j]*x[j];
            }
        }
    }
    for(i=0;i<n;i++) {
        x[i]=c[i]/a[i][i];
    }
    m++;

    if(m>l){
        cout<<"\nThe Solution is : \n";
        for(i=0;i<n;i++) {
            cout<<"\nx("<<i<<") = "<<x[i]<<"\n";
        }
        break;
    }
    }
}
