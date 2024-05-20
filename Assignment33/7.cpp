#include<iostream>
using namespace std;

class Matrix
{
    protected:
    int a,b,c,d;

    public:
    void get_data()
    {
        cout<<"Enter  the values of matrix:"<<endl;
        cin>>a>>b>>c>>d;
    }
};

class cal_matrix : public Matrix
{
    public:
    void display()
    {
        cout<<"Determinant: "<<(a*d)-(b*c)<<endl;
    }
};

int main()
{
    cal_matrix m;
    m.get_data();
    m.display();
    return 0;
}