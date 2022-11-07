#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter Ten numbers: ";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    sum=sum+a[i];
    cout<<"sum of numbers: "<<sum;
    cout<<endl;
    return 0;
}