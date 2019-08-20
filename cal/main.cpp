#include<iostream>
#include<stdio.h>
using namespace std;
struct timems
{
    int min;
    int seconds;
};
class treadmill
{
    float speed;
    float incline;
    timems t;
    float calories;
public:
    treadmill()
    {
        speed = 3;
        incline = 0;
    }
    //default initializer sets the speed to 3 and Incline to 0;
    //Two parameters to set speed and incline
    treadmill(float s, float i)
    {
        speed = s;
        incline = i;
    }
    //Two parameters to set speed and incline
    treadmill(float s, float i, float c, timems t1)
    {
        speed = s;
        incline = i;
        calories = c;
        t.min = t1.min;
        t.seconds = t1.seconds;
    }
    //four parameters to set all 4

    //mutators
    void mut_speed(float s)
    {
        if (s != 0)
            this->speed = s;
    }
    void mut_incline(float s)
    {
        if (s != 0)
            this->incline = s;
    }
    void mut_time(timems t1)
    {
        if (t1.min != 0 && t1.seconds != 0)
        {
            this->t.min = t1.min;
            this->t.seconds = t1.seconds;
        }
    }
    void mut_calories(float s)
    {
        if (s != 0)
            calories = s;
    }
    //gets
    float get_speed()
    {
        return this->speed;
    }
    float get_incline()
    {
        return this->incline;
    }
    timems get_time()
    {
        return this->t;
    }
    float get_calories()
    {
        return this->calories;
    }
    void setallzero()
    {
        this->speed = 0;
        this->calories = 0;
        this->incline = 0;
        this->t.min = 0;
        this->t.seconds = 0;
        //set all data members to zero (a mutator method to reset all data members to 0)
    }
    float caloriesburned()
    {
        float def = 4.0 / 60.0;
        //cout<<"def="<<def;
        int sec = (this->t.min) * 60 + this->t.seconds;
        float a = (float)(sec*(def));
        //cout<<"float a=="<<a;
        return a;
        //a mutator method to calculate calories burned (assume a burn rate of 4 calories per minute or 4/60 per second)
    }
    void display()
    {
        cout << "speed:" << this->speed << "\n";
        cout << "incline:" << this->incline << "\n";
        cout << "calories:" << this->calories << "\n";
        cout << "time->minutes:" << this->t.min << "\n";
        cout << "time->seconds:" << this->t.seconds << "\n";
    }
    //an accessor method to print all data members
};
int main()
{
    treadmill t1; // for default constructor
    treadmill t2(3.0, 12); // for constructor with 2 parameters
    timems ob;
    ob.min = 23;
    ob.seconds = 40;
    treadmill t3(3.2, 12, 100, ob); //for constructor with 4 parameters
                                    // test for display method for t1,t2,t3 objects to prove instantiation works
    t1.display();
    cout << "\n";
    t2.display();
    cout << "\n";
    t3.display();
    cout << "\n";
    //t1
    // test for set methods for t1 object by calling all mutator functions
    ob.min = 12;
    ob.seconds = 34;
    t1.mut_speed(4);
    t1.mut_calories(100);
    t1.mut_incline(22);
    t1.mut_time(ob);
    // test for get methods for object t1 by calling all accessor function
    cout << "speed for t1 is " << t1.get_speed();
    cout << "\n";
    cout << "incline for t1 is " << t1.get_incline();cout << "\n";
    cout << "calories for t1 is " << t1.get_calories();cout << "\n";
    timems ob1 = t1.get_time();
    cout << "exercised time for t1 is " << ob1.min << " minutes " << ob1.seconds << " seconds" << "\n";
    cout << "total calories burned is=" << t1.caloriesburned() << "\n";
    // calling display function for object t1 after using set and get methods
    t1.display();
    // test for setallzero method for object t1
    t1.setallzero();
    // again printing to check if setallzero worked??
    t1.display();
    /*
    //t2
    // test for set methods for t2 object by calling all mutator functions
    ob.min = 12;
    ob.seconds = 34;
    t2.mut_speed(4);
    t2.mut_calories(100);
    t2.mut_incline(22);
    t2.mut_time(ob);
    // test for get methods for object t2 by calling all accessor function
    cout << "speed for t2 is " << t2.get_speed();
    cout << "\n";
    cout << "incline for t2 is " << t2.get_incline();cout << "\n";
    cout << "calories for t2 is " << t2.get_calories();cout << "\n";
    timems ob2 = t2.get_time();
    cout << "exercised time for t2 is " << ob2.min << " minutes " << ob2.seconds << " seconds" << "\n";
    cout << "total calories burned is=" << t2.caloriesburned() << "\n";
    // calling display function for object t1 after using set and get methods
    t2.display();
    // test for setallzero method for object t1
    t2.setallzero();
    // again printing to check if setallzero worked??
    t2.display();

    //t3
    // test for set methods for t3 object by calling all mutator functions
    ob.min = 12;
    ob.seconds = 34;
    t3.mut_speed(4);
    t3.mut_calories(100);
    t3.mut_incline(22);
    t3.mut_time(ob);
    // test for get methods for object t3 by calling all accessor function
    cout << "speed for t3 is " << t3.get_speed();
    cout << "\n";
    cout << "incline for t3 is " << t3.get_incline();cout << "\n";
    cout << "calories for t3 is " << t3.get_calories();cout << "\n";
    timems ob3 = t3.get_time();
    cout << "exercised time for t3 is " << ob3.min << " minutes " << ob3.seconds << " seconds" << "\n";
    cout << "total calories burned is=" << t3.caloriesburned() << "\n";
    // calling display function for object t1 after using set and get methods
    t3.display();
    // test for setallzero method for object t3
    t3.setallzero();
    // again printing to check if setallzero worked??
    t3.display();
    */
}
