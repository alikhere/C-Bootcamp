#include <iostream>
using namespace std;
#include<array>

int main()
{
    array<int,5> arr;
    cout<<"Enter 5 elements of the array"<<endl;
    for(int i=0; i<arr.size(); i++)
    cin>>arr[i];

    for(int i =0; i<arr.size(); i++)
    cout<<arr.at(i)<<" ";

    int x;
    cout<<endl<<"Enter the index: ";
    cin>>x;
    cout<<"Value at index "<<x<< " is "<<arr.at(x)<<endl;
    return 0;

}
