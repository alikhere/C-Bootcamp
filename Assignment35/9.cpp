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

    cout<<"Sum of the number is "<<a<<endl;
    return 0;
}