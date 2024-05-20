#include<iostream>
using namespace std;
int check_fibo(int n)
{
    int a=-1,b=1,c=0,i;
    for(i=0;c<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(check_fibo(n))
    cout<<"Given number present in fibonacci series"<<endl;
    else
    cout<<"Given number not present in fibonacci series";
return 0;
}