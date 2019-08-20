#include <iostream>

using namespace std;

int main()
{
    int day,daye;
    // Prompt the user to enter an integer for today's day of the week


    cout << "Enter today's day :";
    cin>>day;


    // Prompt the user to enter the number of days after today
    cout<<"Enter the number of days elapsed since today:";
    cin>>daye;

    // Calculate future day
    int futureDay = (day + daye) % 7;

		cout<<"Today is ";
		switch (day)
		{
			case 0: cout<<"Sunday"; break;
			case 1: cout<<"Monday"; break;
			case 2:cout<<"Tuesday"; break;
			case 3: cout<<"Wednesday"; break;
			case 4: cout<<"Thursday"; break;
			case 5: cout<<"Friday"; break;
			case 6: cout<<"Saturday";
		}

		cout<<" and the future day is ";
		switch (futureDay)
		{
            case 0: cout<<"Sunday"; break;
			case 1: cout<<"Monday"; break;
			case 2:cout<<"Tuesday"; break;
			case 3: cout<<"Wednesday"; break;
			case 4: cout<<"Thursday"; break;
			case 5: cout<<"Friday"; break;
			case 6: cout<<"Saturday";
		}
    return 0;
}
