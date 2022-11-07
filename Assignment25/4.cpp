#include<iostream>
using namespace std;
class LargestNumber
{
    private:
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter three numbers: ";
        cin>>a>>b>>c;
    }
    int Larg_Num()
    {
        int max;
        if(a>b && a>c)
        max=a;
        if(b>a && b>c)
        max=b;
        else
        max=c;
        return max;
    }
};
int main()
{
    int x;
    LargestNumber c;
    c.input();
    x=c.Larg_Num();
    cout<<"Largest no is "<<x<<endl;

    return 0;
}