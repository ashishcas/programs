#include <iostream>
#include <fstream>

using namespace std;

int main()

{   int i,j;
    sum =0;
     ifstream infile(inname);
      if (!infile)
      {
    cout << "There was a problem opening file " << inname << " for reading." << endl;
      return 0;
       }
      cout << "Opened " << inname  << endl;
      while (infile >> i>>j)
      {
          for(int k=i;i<j+1;i++)
          {
              sum +=i;
          }
          cout<<sum<<endl;
      }
    return 0;
}
