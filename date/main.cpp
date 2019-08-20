#include <iostream>

using namespace std;
struct Date
{
    long year,month,day;

};
bool is_before(Date);

int main()
{
    Date d;
    cout << "Enter year month and day " << endl;
    cin>>d.year>>d.month>>d.day;
    bool x = is_before(d);
    if(x)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}

bool is_before(Date e)
{
    //since date is not specified considering date as 13 th june 2017
    // day : 13 month :06 year :2017
     if(e.year<2017)
     {
         return true;
     }
     else if( e.year== 2017 && e.month<06)
     {
         return true;
     }
      else if( e.year== 2017 && e.month == 06 && e.day <13 )
      {
          return true;
      }
      else
      {
          return false;
      }
}
