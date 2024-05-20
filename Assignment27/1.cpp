#include <iostream>
using namespace std;

class Complex
{
    private:
    int real,img;

    public:
    Complex(int r=0, int i=0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }

    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = real * c.real;
        temp.img = img * c.img;
        return temp;
    }

    void operator==(Complex c)
    {
        if(real == c.real && img == c.img)
        cout<<"Complex numbers are equal"<<endl;
        else
        cout<<"Complex numbers are not equal"<<endl;

    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1(2,5),c2(2,4),sum,diff,prod,equal;
    cout<<"Given complex numbers:"<<endl;
    c1.display();
    c2.display();
    sum = c1+c2;
    diff = c1-c2;
    prod = c1*c2;
    cout<<"After sum,differne and product"<<endl;
    sum.display();
    diff.display();
    prod.display();
    c1==c2;
    return 0;

}