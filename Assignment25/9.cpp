#include<iostream>
using namespace std;
class Circle
{
    private:
    int r;
    public:
    void input()
    {
        cout<<"Enter radius of circle: ";
        cin>>r;
    }
    float Area()
    {
        return 3.14*r*r;
    }
};
int main()
{
    float area;
    Circle C;
    C.input();
    area=C.Area();
    cout<<"Area of circle: "<<area<<endl;
    return 0;
}