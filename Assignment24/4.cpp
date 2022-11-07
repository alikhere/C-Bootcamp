#include<iostream>
using namespace std;
int fact(int n)
{
    int i,sum=1;
    for(i=1;i<=n;i++)
    sum=sum*i;
    return sum;
}

int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

void print_pascal(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" "<<comb(i,j);
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter number of lines for pascal triangle: ";
    cin>>n;
    print_pascal(n);
    return 0;
}