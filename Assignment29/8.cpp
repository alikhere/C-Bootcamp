#include <iostream>
using namespace std;


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

};


int main()
{
    Rupees r = 20;
    int x = r;
    cout<<x<<endl;
    return 0;
}
