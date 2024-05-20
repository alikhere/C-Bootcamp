#include<iostream>
using namespace std;
int max_value(int num)
{
    int i,r,max=0;
    while(num)
    {
        r=num%10;
        num=num/10;
        max=r>max ? r : max;
    }
    return max;
}

int main()
{
    int num,i;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Maximum value in given digit is "<<max_value(num)<<endl;
return 0;
}