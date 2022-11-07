#include<iostream>
using namespace std;
void sum(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    sum(a,b,c);
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum(a,b);
    return 0;
}

void sum(int a, int b, int c)
{
    cout<<"Sum: "<<a+b+c<<endl;
}