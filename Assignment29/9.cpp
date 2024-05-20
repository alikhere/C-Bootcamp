#include <iostream>
using namespace std;
class Doller;

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

void display()
{
    cout<<"DOller: "<<x<<endl;
}

};


int main()
{
    int x = 50;
    Doller d;
    d = x;
    d.display();
    return 0;
}
