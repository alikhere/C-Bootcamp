#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    void input()
    {
        cout<<"Enter length and breadth of rectangle: ";
        cin>>length>>breadth;
    }
    int Area()
    {
        return length*breadth;
    }
};
int main()
{
    int area;
    Rectangle C;
    C.input();
    area=C.Area();
    cout<<"Area of given rectangle: "<<area<<endl;
    return 0;
}