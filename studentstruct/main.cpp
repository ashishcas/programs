#include <iostream>

using namespace std;

struct student
{
    string  name[10],grade[10]; // creating string array to store names
    int id[10];
};

int main()
{
    student s; // creating oobject to structure student
    s.name[0] = "john";
    s.name[1] = "stevart";
    s.name[2] = "robert";
    s.id[0] = 1234;
    s.id[1] = 1324;
    s.id[2] = 1432;
    s.grade[0] = "A";
    s.grade[1] = "B";
    s.grade[2] = "D";

    for(int i =0;i<3;i++)
    {
        cout << "Name of student "<<i+1 <<" is: "<<s.name[i]<<endl;
        cout<<"ID of students "<<i+1<<" is: "<<s.id[i]<<endl;
        cout<<"Grade of student "<<i+1<<" is: "<<s.grade[i]<<endl;
        cout<<endl;
    }

    return 0;
}
