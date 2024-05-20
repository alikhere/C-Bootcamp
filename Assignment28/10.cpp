#include <iostream>
using namespace std;

class Distance
{
    private:
    int feet;
    int inches;

    public:
    Distance()
    {
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    void display()
    {
        cout<<"Feet: "<<feet<<endl<<"Inches: "<<inches<<endl;
    }

    void operator() (int a, int b, int c)
    {
        feet = a+b+5;
        inches = a+c+15;
    }
};

int main()
{
    Distance d1,d2(2,5);
    d2.display();
    d1(4,6,8);
    d1.display();
    return 0;
}