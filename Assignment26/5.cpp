#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date(int x, int y, int z)
    {
        day=x;
        month=y;
        year=z;
    }
    void display()
    {
        cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;

    }
};
int main()
{
    Date c(7,11,2022);
    c.display();
    return 0;
}