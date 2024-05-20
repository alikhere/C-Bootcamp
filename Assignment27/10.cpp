#include <iostream>
using namespace std;

class Matrix
{
    private:
    int a[3][3];

    public:
    void get_matrix()
    {
        cout<<"Enter the value of 3X3 matrix:"<<endl;
        int i,j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void display()
    {
        int i,j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;
        int i,j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                temp.a[i][j] = a[i][j]+m.a[i][j];
            }
        }
        return temp;
    }

};

int main()
{
    Matrix m1,m2,m3;
    m1.get_matrix();
    m2.get_matrix();
    cout<<"first matrix : "<<endl;
    m1.display();
    cout<<"second matrix :"<<endl;
    m2.display();
    m3 = m1+m2;
    cout<<"Additon of given matrix: "<<endl;
    m3.display();
    return 0;
}