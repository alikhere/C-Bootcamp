#include <iostream>
using namespace std;

class Complex
{
    private:
    int real,img;

    public:
    Complex(int a=0, int b=0)
    {
        real = a;
        img = b;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    Complex c1(5,8),c2(3,4),c3;
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    return 0;
}