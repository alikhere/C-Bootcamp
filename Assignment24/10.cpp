#include<iostream>
using namespace std;
void Add(int a, int b)
{
    cout<<"Sum: "<<a+b<<endl;
}

void Add(float a, float b)
{
    cout<<"Sum: "<<a+b<<endl;
}

void Add(int a, float b)
{
    cout<<"Sum: "<<a+b<<endl;
}

int main()
{
    int a=2,b=3;
    float c=4.2,d=5.1;
    Add(a,b);
    Add(c,d);
    Add(a,c);
    return 0;
}

