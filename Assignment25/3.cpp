#include<iostream>
using namespace std;
class Factorial
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter a number: ";
        cin>>a;
    }
    void fact()
    {
        int sum=1,i;
        for(i=1;i<=a;i++)
        sum=sum*i;
        cout<<"Factorial of "<<a<<" is "<<sum<<endl;
    }
};
int main()
{
    Factorial c;
    c.input();
    c.fact();
    return 0;
}