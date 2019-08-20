#include <iostream>

using namespace std;

class ChaseAccounts
{
   private:
       char name,password;
   public:
       int i=0;
    void set()
    {
        cout<<"enter name and password"<<endl;
        cin>>name;
        cin>>password;
        i++;
    }
    void get()
    {
        cout<<"Name : "<<name<<" "<<"Password :"<<password<<endl;
    }
    void display()
    {
    cout<<"NUMBER of accounts created are : "<<i<<endl;
    }
};

int main()
{
    ChaseAccounts ob1,ob2;
    ob1.set();
    ob2.set();
    //ob1.get();
    //ob2.get();
    ob2.display();
    return 0;
}
