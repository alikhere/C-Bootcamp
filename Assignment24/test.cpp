#include<iostream>
using namespace std;
void check_prime(int num)
{   int i;
        for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        break;
    }
    if(i==num/2+1)
    cout<<"Given number is prime"<<endl;
    else
    cout<<"Given nnumber is not prime"<<endl;
}
int main()
{
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    check_prime(n);
return 0;
}