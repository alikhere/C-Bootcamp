#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Default constuction of A is called"<<endl;
    }

    A(int a)
    {
        cout<<"paramatrize constuction is called with parameter "<<a<<endl;
    }
};

class B : public A
{
    public:
    B() : A(5)
    {
        cout<<"Defalult construction of B called"<<endl;
    }
};

int main()
{
    B b;
    return 0;
}