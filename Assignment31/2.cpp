#include <iostream>
using namespace std;

class base
{
    protected:
    int a,b;

    public:
    void getNum()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>a>>b;
    }
};

class derived : public base
{
    private:
    int sum;

    public:
    void Addition()
    {
        sum = a+b;
    }
    public:
    void display()
    {
        cout<<"Sum of given number: "<<a+b<<endl;
    }
};

int main()
{
    derived d1;
    d1.getNum();
    d1.Addition();
    d1.display();
    return 0;

}

