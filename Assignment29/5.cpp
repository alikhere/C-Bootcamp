#include <iostream>
using namespace std;

class Invent2
{
    private:
    float x;
    float y;

    public:
    
    Invent2(float a=0 , float b=0)
    {
        x = a;
        y = b;
    }
    
    void display()
    {
        cout<<"X: "<<x<<endl<<"Y: "<<y<<endl;
    }
};


class Invent1
{
    private:
    float x;
    float y;

    public:
    Invent1(float a=0, float b=0)
    {
        x = a;
        y = b;
    }
    
    operator float()
    {
        return x*y;
    }

    operator Invent2()
    {
        Invent2 d(x,y);
        return d;
    }

};

int main()
{
    Invent1 s1(4.2,6.5);
    Invent2 d1;
    float tv;
    tv = s1;
    d1 = s1;
    d1.display();
    return 0;
}