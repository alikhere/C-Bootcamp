#include<iostream>
using namespace std;

class Swap
{
    private:
    int x;

    public:
    Swap(int a)
    {
        x = a;
    }
    
    void swap_value(Swap *p2)
    {
        int temp = x;
        x = p2->x;
        p2->x = temp;
    }

    void display()
    {
        cout<<x<<endl;
    }
};


int main()
{
    Swap *p1;
    Swap s1(2);
    p1 = &s1;

    Swap *p2;
    Swap s2(5);
    p2 = &s2;
    
    p1->swap_value(p2);
    s1.display();
    s2.display();
    return 0;
}