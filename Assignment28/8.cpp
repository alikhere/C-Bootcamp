#include<iostream>

using namespace std;

class Cordinate
{
    private:
    int x,y,z;

    public:
    Cordinate(int a=0, int b=0, int c=0)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout<<"\nX: "<<x<<",   Y: "<<y<<",   Z: "<<z<<endl;
    }

    Cordinate operator, (Cordinate c)
    {
        cout<<"\ncomma operator is called!";
        Cordinate temp;
        temp.x = c.x;
        temp.y = c.y;
        temp.z = z;
        return temp;
    }

};

int main()
{
    Cordinate c1(2,3,4), c2(5,6,7),c3(9,9,9);
    cout<<"Before assigning"<<endl;
    c1.display();
    c2.display();
    c3.display();

    c3 = (c1,c2);
    cout<<"\nAfter assigning"<<endl;

    c3.display();
    return 0;
    
}