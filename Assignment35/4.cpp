#include<iostream>
using namespace std;
template <class T>

void Swap(T &a, T &b)
{
    float temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    float A=6 ,B=9;
    Swap<float> (A,B);
    cout<<"A = "<<A<<" B = "<<B<<endl;
    return 0;
}