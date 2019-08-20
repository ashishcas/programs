#include <iostream>
#include <string>
#include "Chemical.h"

//using namespace std;

  double c;
  double m;



double applyEnergyDifference(double q)
{
Chemical::temperature =Chemical::temperature +(double)(q/(c*m));
return temperature;
}

Chemical(string n, double m, double c)
{
name = n;
mass = m;
specificHeatCapacity = c;
temperature = 0.0;
}
