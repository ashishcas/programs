#include <iostream>

using namespace std;

int main()
{
    char a;//declaring character
    while(1)//1 is used to run loop infinite times
    {
        cout << "Enter character" << endl;
        cin>>a;
        if(a=='$') // if character entered is '$' the loop breaks
        {
          break;
        }
        else
        {
            cout<<"entered character is : "<<a<<endl;
        }


}

    return 0;
}
