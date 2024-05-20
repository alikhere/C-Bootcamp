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

friend void operator>>(istream &input, complex &c)
{
    cout<<"Enter Real: ";
    input>>c.real;
    cout<<"Enter img: ";
    input>>c.img;


}
friend void operator<<(ostream &output, complex &c)
{
    cout<<c.real<<" + "<<c.img<<"i"<<endl;
}

};


int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}
