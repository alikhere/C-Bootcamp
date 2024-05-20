#include <iostream>
using namespace std;

class Overload
{
    private:
    int x;

    public:

    void set_value(int a)
    {
        x = a;
    }
    Overload operator++()
    {
        Overload temp;
        temp.x = ++x;
        return temp;
    }

    Overload operator--()
    {
        Overload temp;
        temp.x = --x;
        return temp;
    }

    void display()
    {
        cout<<x<<endl;
    }
};

int main()
{
    Overload c1,c2,incr,decr;
    c1.set_value(3);
    c2.set_value(6);
    cout<<"Before increment c1: ";
    c1.display();
    incr = ++c1;
    cout<<"Afer increment c1: ";
    incr.display();
    cout<<"Before decrement c2: ";
    c2.display();
    decr = --c2;
    cout<<"Afer decrement c2: ";
    decr.display();
    return 0;
    
}