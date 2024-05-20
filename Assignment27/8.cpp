#include <iostream>
using namespace std;

class matrix
{
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
        cout<<"matrix is: "<<endl;
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

    matrix operator-()
    {
        matrix temp;
        int i,j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                temp.a[i][j] = -a[i][j];
            }
        }
        return temp;
    }

};

int main()
{
    matrix c1,c2;
    c1.get_matrix();
    c1.display();
    c2 = -c1;
    c2.display();
    return 0;
}