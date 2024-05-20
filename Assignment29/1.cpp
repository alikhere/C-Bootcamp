#include <iostream>
using namespace std;

class Time
{
    int hours;
    int mins;

    public:
    Time()
    {

    }

    Time(int m)
{
    mins = m;
    hours = mins/60;
    mins = mins%60;
}

void display()
{
    cout<<"Hours: "<<hours<<endl<<"Mins: "<<mins<<endl;
}
};

int main()
{
    Time t;
    int s = 92;
    t = s;
    t.display();
    return 0;
}