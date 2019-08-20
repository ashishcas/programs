#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> coll;
    vector<int>::iterator pos;
    int n,b;
    // insert elements from 1 to 6 in arbitrary order
      cin>>n;
    for(int i=0;i<n;i++)
      {
          cin>>b;
        coll.push_back(b);
    }

    // find and print maximum elements
    pos = max_element (coll.begin(), coll.end());
    cout << "max: " << *pos << endl;
}
