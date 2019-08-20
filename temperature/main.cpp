
#include <iostream>


using namespace std;
void menu();
struct temperature
{
    float ce;
    float fah;
    float convertToFah(float ce)
{
       return ce*9/5+32;
}
float convertToCel(float fah)
{
       return (fah-32)*5/9;
}
};




int main()
{

       int ch;
       do {
              cout << "Enter 1 to do the conversions 2 to quit:";
              cin >> ch;
              menu();
       } while(ch == 1);
       return 0;
}

void menu()
{
    temperature t;
int choice;
float value;
cout << "Enter 1 to convert from Fahrenheit to Celsius and 2 to convert Celsius to Fahrenheit" << endl;
cin >> choice;
switch(choice)
{
case 1:
       cout << "Enter the value in Fahrenheit:";
       cin >> value;
       cout << "The value in celsius is " << t.convertToCel(value) << endl;
       break;
case 2 :
       cout << "Enter the value in Celsius:";
       cin >> value;
       cout << " The value in Fahrenheit is "<< t.convertToFah(value) << endl;
       break;
default: break;
}
}
