#include<iostream>
using namespace std;
class Area
{
    private:
    int r;
    int len;
    int bred;
    int base;
    int height;
    public:
    void input()
    {
        cout<<"Enter radius of circle: ";
        cin>>r;
        cout<<"Enter length and breadth of rectangle: ";
        cin>>len>>bred;
        cout<<"Enter base and height of triagle: ";
        cin>>base>>height;
    }
     void area()
    {
        cout<<"Area of circle: "<<3.14*r*r<<endl;
        cout<<"Area of rectangle: "<<len*bred<<endl;
        cout<<"Area of triangle: "<<base*height*0.5<<endl;
    }
};
int main()
{
    Area C;
    C.input();
    C.area();
    return 0;
}