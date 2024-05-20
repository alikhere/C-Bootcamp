
#include <iostream>
using namespace std;

class Marks
{
    private:
    int marks;

    public:
    Marks(int a=0)
    {
        marks = a;
    }
    void display()
    {
        cout<<"Marks: "<<marks<<endl;
    }

    Marks* operator-> ()
    {
        return this;
    }
};

int main()
{
    Marks m(55);
    m.display();
    m->display();
    return 0;
}