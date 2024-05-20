#include <iostream>
using namespace std;

class Numbers
{
    int x,y,z;

    public:
    Numbers operator-()
    {
        Numbers temp;
        temp.x = -x;
        temp.y = -y;
        temp.z = -z;
        return temp;
    }

    void set_value()
    {
        cout<<"Enter the value of X, Y and Z"<<endl;
        cin>>x>>y>>z;
    }

    void display()
    {
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
        cout<<"Z: "<<z<<endl;
    }

};

int main()
{
    Numbers c1,c2;
    c1.set_value();
    c2 = -c1;
    c2.display();
    return 1;
}
