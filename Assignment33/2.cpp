#include<iostream>
using namespace std;

class Shape
{
    protected:
    float l,b;

    public:
    void get_data(int p, int q=0)
    {
        l=p;
        b=q;
    }

    void display_area()
    {
        cout<<"Area"<<endl;
    }
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
        cout<<"Area of circle: "<<3.14*l*l<<endl;
    }
};


int main()
{
    Rectangle r;
    Triangle t;
    Circle c;
    r.get_data(2,4);
    t.get_data(2,4);
    c.get_data(2,4);
    r.display_area();
    t.display_area();
    c.display_area();
    return 0;
}