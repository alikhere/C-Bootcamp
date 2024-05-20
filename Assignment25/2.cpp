#include<iostream>
using namespace std;
class Time
{
    private:
    int hour;
    int min;
    int sec;

    public:
    void Set(int x, int y, int z)
    {
        hour=x;
        min=y;
        sec=z;
    }
    void display()
    {
        cout<<hour<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
    }



};
int main()
{
    Time a;
    a.Set(2,30,15);
    a.display();
}

