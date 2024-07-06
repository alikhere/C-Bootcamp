#include<iostream>
using namespace std;
template <class T = float>

T Sum(T arr[])
{
    T sum =0;
    for(int i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int a[] = {1,3,5,6,1};
    int sum = Sum<int>(a);
    cout<<"Sum = "<<sum<<endl;
    return 0;
}