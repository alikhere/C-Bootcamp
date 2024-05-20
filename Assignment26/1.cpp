#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imag;
    public:
    void setData(int x, int y)
    {
        real=x;
        imag=y;
    }
    void showData()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    complex add(complex C)
    {
        complex temp;
        temp.real=real+C.real;
        temp.imag=imag+C.imag;
        return temp;
    }
};
int main()
{
    complex a,b,c;
    a.setData(3,4);
    b.setData(5,6);
    a.showData();
    b.showData();
    c=a.add(b);
    c.showData();
    return 0;
}

