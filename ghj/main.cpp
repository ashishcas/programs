#include <iostream>

using namespace std;

int main()
{
    int i;
    i=3;
    int *p = &i;
    int m = *p;
    int n =*p+2;
    cout <<m<<""<< n<< endl;
    return 0;
}
