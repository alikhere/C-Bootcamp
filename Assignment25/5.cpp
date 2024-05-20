#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter a number: ";
        cin>>a;
    }
    void Rev_Num()
    {
        int rev=0,rem;
        while(a)
        {
            rev=rev*10+a%10;
            a=a/10;
        }
        cout<<"Reverse: "<<rev<<endl;
    }
};
int main()
{
    ReverseNumber c;
    c.input();
    c.Rev_Num();
    return 0;
}