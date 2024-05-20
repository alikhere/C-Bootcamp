#include<iostream>
using namespace std;

class Shape
{
    protected:
    double l,b;

    public:
    void get_data()
    {
        cout<<"Enter the lenght and breadth of rectangle or base and height of triangel: ";
        cin>>l>>b;
    }

    virtual void display_area() = 0;
};

class Rectangle : public Shape
{
    public:
    virtual void display_area()
    {
        cout<<"Area of rectangle: "<<l*b<<endl;
    }
};

class Triangle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of triangle: "<<0.5*l*b<<endl;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    r.get_data();
    t.get_data();
    r.display_area();
    t.display_area();
    return 0;
}