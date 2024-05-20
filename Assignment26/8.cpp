#include<iostream>
using namespace std;
class Bank
{
    private:
    int prin;
    int time;
    static float rate;
    public:
    Bank()
    {
        prin=0;
        time=0;
        rate=0;
    }
    static void Read_ROI()
    {
        cout<<"Enter Rate of interest: ";
        cin>>rate;
    }
    void Read()
    {
        cout<<"Enter Principal amount and time in year: ";
        cin>>prin>>time;
    }
    void simple_int()
    {
        cout<<"Simple interest: "<<(prin*time*rate)/100.0<<endl;
    }
};
float Bank::rate;
int main()
{
    Bank c1,c2;
    Bank::Read_ROI();
    c1.Read();
    c1.simple_int();
    c2.Read();
    c2.simple_int();
    return 0;
}