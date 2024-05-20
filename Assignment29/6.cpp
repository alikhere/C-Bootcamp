#include <iostream>
using namespace std;

class Time
{
    int hours;
    int mins;
    int secs;

    public:
    Time()
    {
        hours = 0;
        mins = 0;
        secs = 0;
    }

    Time(int s)
{
    secs = s;

    mins = secs/60;
    secs = secs%60;

    hours = mins/60;
    mins = mins%60;
}

void display()
{
    cout<<"Hours: "<<hours<<endl<<"Mins: "<<mins<<endl<<"Secs: "<<secs<<endl;
}
};

int main()
{
    int duration;
    cout<<"Enter the duration is second: ";
    cin>>duration;
    Time t;
    t = duration;
    t.display();
    return 0;
}