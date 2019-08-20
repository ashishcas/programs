#include <iostream>

using namespace std;

int main()
{
    int a[]={5,7,10,9};
    int **p = (a+1);
    cout << **a+10 << endl;
    return 0;
}
