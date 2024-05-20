#include <iostream>
using namespace std;

class complex
{
    private:
    int img;
    int real;

    public:
    complex()
    {
        img=0;
        real=0;
    }
    void SetData(int real, int img)
    {
        this ->img = img;
        this ->real = real;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    complex c;
    c.SetData(4,6);
    c.display();
    return 0;
}