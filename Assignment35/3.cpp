#include<iostream>
using namespace std;
template <class T = float , class P = float, class Q = int>

T Max(T a, T b, Q c)
{
    if(a>=b)
    {
        if(a>=c)
        return a;
        else
        return c;
    }
    else
    {
        if(b>=c)
        return b;
        else
        return c;
    }
}
int main()
{
    float max = Max<float,float, int> (9,8,12);
    cout<<"Larest number is "<<max<<endl;
    return 0;
}