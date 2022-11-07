#include<iostream>
using namespace std;
class Box
{
    private:
    int l,b,h;
    public:
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
    void input()
    {
        cout<<"Enter length, breadth and height of box: "<<endl;
        cin>>l>>b>>h;
    }
    int Vol()
    {
        return(l*b*h);
    } 
};
int main()
{
    int vol;
    Box c;
    c.input();
    vol=c.Vol();
    cout<<"Volume of box: "<<vol<<endl;
    return 0;
}