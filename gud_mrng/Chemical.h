#include<string>
#include<iostream>

//using namespace std;

#pragma once

class Chemical {

private:
std::string name;
double mass;
double specificHeatCapacity;
double temperature;

public:
Chemical(std::string n, double m, double c);
double applyEnergyDifference(double q);


};
