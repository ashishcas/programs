#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

void moveTemperaturesToRight(double temperatures[], double windSpeed[], string windDirection[])
{
for (int i = 3; i > 0; i--)
{
temperatures[i] = temperatures[i - 1];
windSpeed[i] = windSpeed[i - 1];
windDirection[i] = windDirection[i - 1];
}
}
int main()
{
string name;
int choice;
int numOfReadings = 0;
double temperatures[4], windSpeeds[4];
string windDirections[4];
bool initialized = false;
string str;
//Have the user provide a name for the weather station upon entry.
cout << "Enter the name of weather station: ";
getline(cin, name);
//Control loop to perform various actions.
while (true)
{
cout << "1. Input a complete weather reading." << endl;
cout << "2. Print the current weather." << endl;
cout << "3. Print the weather history (from most recent to oldest)." << endl;
cout << "4. Exit the program." << endl;
cout << "Enter your choice: ";
cin >> str;
if (str.length() != 1 || str < "1" || str > "4")
choice = 0;
else
choice = atoi(str.c_str());

//Switch based on choice.
switch (choice)
{
case 1:   moveTemperaturesToRight(temperatures, windSpeeds, windDirections);
cout << "Enter the temperature (a value >=0):";
cin >> temperatures[0];
}while (temperatures < 0);

//get correct wind speed
do
{
cout << "Enter the wind speed (a value >=0):";
cin >> windSpeeds[0];
} while (windSpeeds < 0);

//get correct wind direction
do
{
cout << "Enter the wind direction (North,South,East or West):";
cin >> windDirections[0];
} while (windDirections != 'North' && windDirections != 'South' && windDirections != 'East' && windDirections != 'West');
initialized = true;
if(initialized)
numOfReadings++;
if (numOfReadings > 4)
numOfReadings = 4;
break;
case 3:   //Print the current weather, if valid weather is entered.
for (int i = 0; i < numOfReadings; i++)
{
cout << "*****" << name << "*****" << endl;
cout << "Temperature: " << temperatures[i] << endl;
cout << "Wind speed: " << windSpeeds[i] << endl;
cout << "Wind direction: " << windDirections[i] << endl << endl;
}
if (numOfReadings == 0)
cout << "Please enter the details before asking to print." << endl;
break;
case 2:   if (numOfReadings == 0)
    {
    cout << "Please enter the details before asking to print." << endl;
    break;
    }
  cout << "*****" << name << "*****" << endl;
  cout << "Temperature: " << temperatures[0] << endl;
  cout << "Wind speed: " << windSpeeds[0] << endl;
  cout << "Wind direction: " << windDirections[0] << endl << endl;
  break;
case 4:
     return 0;   //Stops execution.
default: cout << "Invalid choice. Please follow the menu." << endl;
}
}
}
