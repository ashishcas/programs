#include <iostream>

using namespace std;
int a,b,c,g;
bool e;
char grade(int , int , int , int);
bool valid(int , int , int );

int main()
{
    cout << "Enter the Threashold values A B C" << endl;
    cin>>a>>b>>c;
    cout<<"What is your NUMERICAL score"<<endl;
    cin>>g;
    char d = grade(a,b,c,g);
    if(d == 'N')
    {
        cout<<"The threshold is not valid"<<endl;
    }
    else
        cout<<"Your final grade is : "<<d<<endl;
    return 0;
}
char grade(int x ,int y ,int z,int k)
{
   e=valid(x,y,z);
   if(e)
   {
       if(g>a)
        return 'A';
       else if(g>b && g<a)
       {
           return 'B';
       }
       else if(g>c && g<b)
       {
           return 'C';
       }
       else
        return 'F';
   }
   else
    return 'N';

}

bool    valid(int x,int y,int z)
    {
        if(x<100 && y<100 && z<100)
        {
            return true;
        }
        else
            return false;
    }
