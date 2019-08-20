#include <iostream>

using namespace std;

static int b = 10;
const int c =10;

class first
{
public :

    first()
    {
        cout<<"constructor"<<endl;
    }
    ~first()
    {
        cout<<"destructor"<<endl;
    }
};
int main()
{
   first f;
   b =20;
   //c =20;
    cout<<c<<" "<<b<<endl;
    return 0;
     cout << "Hello world!" << endl;
}
