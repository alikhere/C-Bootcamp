#include<iostream>
using namespace std;
template <class T>

T Max(T a, T b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    float max = Max<float> (2,8);
    cout<<"Larest number is "<<max<<endl;
    return 0;
}