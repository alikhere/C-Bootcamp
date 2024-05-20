#include<iostream>
using namespace std;
class Cube
{
    private:
    int l,b,h;
    public:
    Cube(int x, int y, int z)
    {
        l=x;
        b=y;
        h=z;
    }
    int Area()
    {
        return(l*b*h);
    } 
};
int main()
{
    int vol;
    Cube c(2,4,5);
   vol=c.Area();
   cout<<"Volume of cube: "<<vol<<endl;
   return 0;
}