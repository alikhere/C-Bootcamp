#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;

    public:
    Complex()
    {}

    void SetData(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout<<"Real: "<<real<<"    Img: "<<img<<endl;
    }

    operator int()
    {
        return real+img;
    }
};

int main()
{
    Complex c1;
    c1.SetData(4,5);
    c1.display();
    int x;
    x = c1;
    cout<<"Sum of real and img const.of given complex no is "<<x<<endl;
    return 0;

}