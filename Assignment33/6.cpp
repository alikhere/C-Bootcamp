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
class Circle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of Circle: "<<3.14*l*l<<endl;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    Circle c;
    r.get_data();
    t.get_data();
    c.get_data();
    r.display_area();
    t.display_area();
    c.display_area();
    
    return 0;
}