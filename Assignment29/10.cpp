#include <iostream>
using namespace std;
class Doller;

class Rupees
{
    private:
    int x;

    public:

Rupees()
{
    
}
Rupees(int n)
{
    cout<<"PC called for rupees!"<<endl;
    x = n;
}

void display()
{
    cout<<"Rupee: "<<x<<endl;
}

operator int()
{
    cout<<"Casting operator called!"<<endl;
    return x;
}
 int GetR()
 {
    return x;
 }
};


class Doller
{
    private:
    int x;

    public:

Doller()
{
    
}
Doller(int n)
{
    cout<<"PC called for doller!"<<endl;
    x = n;
}

Doller(Rupees r)
{
    cout<<"Doller(Rupees) is called!"<<endl;
    x = r.GetR()/100;
}

void display()
{
    cout<<"DOller: "<<x<<endl;
}

operator int()
{
    cout<<"Casting operator called!"<<endl;
    return x;
}

operator Rupees()
{
    return x*100;
}

};


int main()
{
    Rupees r;
    Doller d;
    int x=100;
    r = x;
    r.display();
    r = 22;
    x = r;
    cout<<"X is "<<x<<endl;
    d = x;
    r = d;
    r.display();
    r = 400;
    d = r;
    d.display();
    return 0;
}
