#include<iostream>
using namespace std;
#include<math.h>
void Area(int R)
{
    cout<<"Area of circle: "<<3.14*R*R<<endl;
}

void Area(int L, int B)
{
    cout<<"Area of rectangle: "<<L*B<<endl;
}

void Area(float b, float h)
{
    cout<<"Area of triangle: "<<(b*h)/2.0<<endl;
}


int main()
{
    int r,l,b;
    float B,H;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Enter length and breadth of rectagle: ";
    cin>>l>>b;
    cout<<"Enter base and height of triange: ";
    cin>>B>>H;
    Area(r);
    Area(l,b);
    Area(B,H);
    return 0;
}