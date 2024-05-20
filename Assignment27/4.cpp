#include <iostream>
using namespace std;

class Time
{
    private:
    int hour,min,sec;

    public:
    Time()
    {
        hour = min = sec =0;
    }

    int operator==(Time t)
    {
        int total = hour*3600 + min*60 + sec;
        int total1 = t.hour*3600 + t.min*60 + t.sec;
        if(total == total1)
        return 1;
        else
        return 0;
    }

    friend int operator>>(istream &input, Time &t);
    friend void operator<<(ostream &output, Time &t);

};

int operator>>(istream &input, Time &t)
{
        cout<<"Enter Hours: ";
        input>>t.hour;
        cout<<"Enter Minutes: ";
        input>>t.min;
        cout<<"Enter Seconds: ";
        input>>t.sec;
        t.min = t.min + t.sec/60;
        t.sec = t.sec%60;
        t.hour = t.hour +t.min/60;
        t.min = t.min%60;
        
        if(t.hour >= 25)
        return 1;
        else
        return 0;
}

void operator<<(ostream &output, Time &t)
{
    output<<"Hours: "<<t.hour<<endl;
    output<<"Minutes: "<<t.min<<endl;
    output<<"Seconds: "<<t.sec<<endl;

}

int main()
{
    Time t1,t2;
    cout<<"********Enter first time*******\n"<<endl;
    if(cin>>t1)
    {
        cout<<"Invalid time"<<endl;
        return 0;
    }
    cout<<"\n ******first time*****"<<endl;
    cout<<t1;
    cout<<"\n \n *********Enter second time********\n"<<endl;
    if(cin>>t2)
    {
        cout<<"invalid time"<<endl;
        return 0;
    }
    cout<<"\n******second time*******"<<endl;
    cout<<t2;

    if(t1 == t2)
    cout<<"\nTime are same"<<endl;
    else
    cout<<"\nTime are not same"<<endl;
    return 0;

}