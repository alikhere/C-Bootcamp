#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;
    
    public:
    complex(int a=0, int b=0)
    {
        real =a;
        img =b;
    }

    void operator=(complex &c)
    {
        real = c.real;
        img = c.img;
        cout<<"Equal to operator is called!"<<endl;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

};

int main()
{
    complex c1(4,5),c2;
    c1.display();
    c2.display();
    c2 = c1;
    c1.display();
    c2.display();
    return 0;
}