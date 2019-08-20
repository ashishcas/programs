#include "Chemical.h"
#include "Chemical.cpp"
#include <iostream>
#include <string>

using namespace std;
int main()
{
   cout << "Chemical 1 : name = water, mass 100.0, specific heat capacity = 4.184" << std::endl;
   //TODO: create a Chemical for water here!
   Chemical("h20", 100, 4,184);
   cout << "Applying 1000 joules of energy to some water!" << endl;
   // TODO: call the applyEnergyDifference function to apply 1000.0 joules of energy!
   waterTemp = applyEnergyDifference(1000.0);
   cout << "The water's final temperature is " << waterTemp << " degrees Celsius" << endl;
   cout << "Chemical 2 : name = hydrogen chloride, mass 100.0, specific heat capacity = 0.7981" << std::endl;
   //TODO: create a Chemical for hydrogen chloride here!
   Chemical(hcl, 100, 0.7981);
   cout << "Absorbing 1000 joules of energy from the hydrogen chloride!" << endl;
   //TODO: call the applyEnergyDifference function to absorb 1000.0 joules of energy!
   hydrogenChlorideTemp = applyEnergyDifference(1000.0);

   cout << "The hydrogen chloride's final temperature is " << hydrogenChlorideTemp << " degrees Celsius" << endl;
}
