#include<iostream>
using namespace std;
#include<math.h>
void Max(int a, int b)
{
    a>b ? cout<<"Maximum no is "<<a : cout<<"Maximum no is "<<b<<endl;
}

void Max(float a, float b)
{
    a>b ? cout<<"Maximum no is he "<<a : cout<<"Maximum no is "<<b<<endl;
}

int main()
{   
    int x,y;
    float a,b;
    cout<<"Enter two integral numbers: "<<endl;
    cin>>x>>y;
    Max(x,y);
    cout<<"Enter two real numbers: ";
    cin>>a>>b;
    Max(a,b);
    return 0;
}