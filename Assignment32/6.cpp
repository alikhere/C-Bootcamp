#include<iostream>
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
    B() : A()
    {
        cout<<"Defalult construction of B called"<<endl;
    }
    B(int x) : A(x)
    {
        cout<<"Para. construction of B called"<<endl;
    }
};

class C : public B
{
    public:
    C() : B()
    {
        cout<<"Default construction of C is called"<<endl;
    }

    C(int x) : B(x)
    {
       cout<<"Para. construction of C is called"<<endl; 
    }
};

int main()
{
    C c;
    cout<<"******************************"<<endl;
    C c1(4);
    return 0;
}