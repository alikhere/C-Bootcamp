#include<iostream>
using namespace std;
class Time
{
    private:
    int h,m,s;
    public:
    void setTime(int x, int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void showTime()
    {
        cout<<h<<" h "<<m<<" m "<<s<<" s"<<endl;
    }
    Time add(Time c)
    {
        Time temp;
        temp.h=h+c.h;
        temp.m=m+c.m;
        temp.s=s+c.s;
        return temp;
    }
    void Normalize()
    {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
};
int main()
{
    Time c1,c2,c3;
    c1.setTime(4,40,55);
    c2.setTime(1,25,20);
    c1.showTime();
    c2.showTime();
    c3=c1.add(c2);
    c3.showTime();
    c3.Normalize();
    c3.showTime();
    return 0;
}

