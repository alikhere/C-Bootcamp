#include <iostream>
using namespace std;

class Array
{
    private:
    int a[50];
    int size;

    public:
    Array()
    {

    }
    void Set_Array(int n, int index)
    {
        a[index] = n;
    }

    void display(int index)
    {
        cout<<a[index]<<endl;

    }
    int operator[] (int index)
    {
        return a[index];
    }
};

int mainI()
{
    Array c1;
    c1.Set_Array(20, 40);
    return 0;

}