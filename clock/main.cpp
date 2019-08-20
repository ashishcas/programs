#include <iostream>

using namespace std;
class Clock
{
private:
    int hours,minutes,seconds;
    public:
    Clock()
    {
        cout<<" ";
    }
       Clock(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
        cout<<"hours:"<<hours<<" "<<"minutes: "<<min<<" "<<"seconds: "<<seconds<<endl;
}
    };

void setClock(int hr, int min, int sec)
{
    Clock(hr,min,sec);

};
class AlarmClock : public Clock
{
    public:
        int ahours,aminutes,aseconds,hr,min,sec;
    AlarmClock( )
    {
        cout<<" ";
    }
    AlarmClock(int hr,int min, int sec);
    void setAlarmClock (int hr, int min, int sec)
     {
          ahours= hr;
        aminutes = min;
        aseconds = sec;
         // AlarmClock(hr1, min2, sec1);
          setClock(hr, min, sec);
     }
     void getAlarmClock()
     {

         cout<<"ALARM HOURS: "<<ahours<<" "<<"ALARM MINUTES:"<<aminutes<<" "<<"ALARM SECONDS: "<<aseconds<<endl;

     }

};
int main()
{
    AlarmClock  a;
    a.setAlarmClock(0,0,0);
    a.getAlarmClock();

    return 0;
}
