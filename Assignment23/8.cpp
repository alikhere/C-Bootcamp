#include<iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int x,y;
    cout<<"Enter two numers: ";
    cin>>x>>y;
    swap(&x,&y);
    cout<<"After swaping: "<<x<<" "<<y;
    cout<<endl;
    return 0;
}
