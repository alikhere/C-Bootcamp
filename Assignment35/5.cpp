#include<iostream>
using namespace std;
template <class T = float,class P = float>

P Sum(T a, P b)
{
    return a+b;
}
int main()
{
    float b  = Sum<float, float> (5.2,7.4);
    cout<<"Sum of the number is "<<b<<endl;
    return 0;
}