#include <iostream>

using namespace std;

class square
{
protected :
    double side = 1.0;
public:
    double calcVal(double );
};
double square ::calcVal(double b)
{
  return b*b;
}

class cube : protected square
{
public:
    double calcVal(double);// function to caluculate volume fo cube
double side =1;
};
double cube::calcVal(double a)
{
    return a*a*a;
}
int main()
{
  cube c;
  square s;
  c.side = 1;
     double e = c.side;

  cout<<"volume  of cube "<<c.calcVal(e)<<endl;;


    return 0;
}
