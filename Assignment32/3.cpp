#include<iostream>
using namespace std;

class Animals
{
    public:
    void sound()
    {
        cout<<"This is sound of base function"<<endl;
    }
};

class Dog : public Animals
{
    public:
    void sound()
    {
        cout<<"This is sound of derived function"<<endl;
    }
};

int main()
{
    Dog d;
    d.sound();
    return 0;
}
