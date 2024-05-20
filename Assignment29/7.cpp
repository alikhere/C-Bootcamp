#include <iostream>
using namespace std;

class Minute
{
    int m;

    public:
    Minute(int a=0)
    {
        m = a;
    }

    void display()
    {
        cout<<"Minutes is "<<m<<endl;
    }
};

class Time
{
    int min;
    int sec;
    int hour;

    public:
    Time(int a=0, int b=0, int c=0)
    {
        hour = a;
        min =b;
        sec = c;


        min = min + sec/60;
        sec = sec%60;
        hour = hour + min/60;
        min = min%60;

    }

 void display()
{
    cout<<"Hours: "<<hour<<endl<<"Mins: "<<min<<endl<<"Secs: "<<sec<<endl;
}

    operator Minute()
    {
        return min;
    }

};

int main()
{
    Time t1(4,12,62);
    t1.display();
    Minute m1;
    m1.display();
    
    m1 = t1;
    t1.display();
    m1.display();
    return 0;

}