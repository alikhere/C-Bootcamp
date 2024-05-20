#include <iostream>
using namespace std;

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
    
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }

};

class Item
{
    int bookid;
    int pages;

    public:
    Item()
    {

    }

    Item(Product p)
    {
        cout<<"Item(Product) is called!"<<endl;
        bookid = p.GetX();
        pages = p.GetY();
        
    }

    void display()
    {
        cout<<"Bookid: "<<bookid<<endl<<"Pages: "<<pages<<endl;
    }

    

};

int main()
{
    Product p1;
    Item i1;
    p1.Set(7,220);
    p1.display();
    i1 = p1;
    i1.display();
    return 0;
}