#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    void Set(float x, float y)
    {
        real=x;
        imag=y;
        
    }

    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }



};
int main()
{
    complex a;
    a.Set(3.6,4);
    a.display();
}

