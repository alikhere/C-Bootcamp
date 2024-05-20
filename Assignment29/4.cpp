#include <iostream>
using namespace std;

class Item
{
    int bookid;

    public:
    Item()
    {

    }

    Item(int a)
    {
        bookid = a;
    }
    void display()
    {
        cout<<"Bookid: "<<bookid<<endl;
    }

    

};


class Product
{
    int x;
    int y;

    public:
    Product()
    {

    }
    
    void Set(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout<<"Product of "<<x<<" and "<<y<<" is "<<x*y<<endl;
    };
    
    operator Item()
    {
        cout<<"casting operator for Product is called!"<<endl;
        
        return x*y;
    }

};



int main()
{
    Product p1;
    Item i1;
    p1.Set(9,4);
    p1.display();
    i1 = p1;
    i1.display();
    return 0;
}