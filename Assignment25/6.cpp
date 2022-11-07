#include<iostream>
using namespace std;
class Square
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter a number: ";
        cin>>a;
    }
    void square()
    {
        static int count=0;
        cout<<"function calling "<<++count<<" time"<<endl<<"Square: "<<a*a<<endl;
    }
};
int main()
{
    int k;
    Square c1,c2,c3;
    c1.input();
    c2.input();
    c3.input();
    c1.square();
    c2.square();
    c3.square();
    return 0;
}