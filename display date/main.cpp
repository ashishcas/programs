#include <iostream>

using namespace std;

int main()
{
    int day,month,year;
    while(1)
    {
    cout << "please enter month :" ;
    cin>>month;
    cout<<endl;
    if(month >= 01 && month <= 12 )
    {

        cout<<"please enter day :";
        cin>>day;
        cout<<endl;
        if(day >= 01 && day <= 31)
        {
            cout<<"please enter  year:";
            cin>>year;

            if(year == 2017 || year == 2018)
            {
                cout<<"the date you entered is "<<month<<"/"<<day<<"/"<<"/"<<year<<endl<<endl;;
                break;
            }
            else
                cout<<"enter year 2017 or 2018"<<endl;
        }
        else
            cout<<"day must be between 01 and 31"<<endl;

    }
    else
        cout<<"month must be between 01 and 12 "<<endl<<endl;
    }
    return 0;
}
