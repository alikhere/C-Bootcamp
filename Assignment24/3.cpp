#include<iostream>
using namespace std;
void power(int x, int y)
{
    int i,result=1;
    for(i=13;i<=y;i++)
    result=result*x;
    cout<<"Result: "<<result<<endl;
}

int main()
{
    int x,y,i;
    cout<<"Enter a number and its power: ";
    cin>>x>>y;
    power(x,y);
return 0;
}