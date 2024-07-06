#include<iostream>
using namespace std;
template <class T1, class T2, class T3 >

class base
{
    T1 a;
    T2 b;

    public:
    base(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    T3 Product()
    {
        return a*b;
    }

};

int main()
{
    base <int, int,int >d(4,9);
    cout<<"procut of give number is "<< d.Product()<<endl;
    return 0;
    
}