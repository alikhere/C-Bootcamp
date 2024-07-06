#include<iostream>
using namespace std;
template <class T = float,class P = float>

P Sum(T a, P b)
{
    return a+b;
}
int main()
{
    int a = Sum<int,int> (5,6);
    float b  = Sum<float, float> (5.2,7.4);
    float c = Sum<int> (4.4,5.2);
    cout<<"Sum of the number is "<<a<<endl;
    cout<<"Sum of the number is "<<b<<endl;
    cout<<"Sum of the number is "<<c<<endl;
    return 0;
}