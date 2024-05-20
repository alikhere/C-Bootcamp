#include<iostream>
using namespace std;
class Static_count
{
    private:
    static int k;
    public:
    static void count()
    {
        k++;
        cout<<"Count: "<<k<<endl;
    }
};
int Static_count::k=0;

int main()
{
    Static_count::count();
    Static_count::count();
    Static_count::count();
}
