#include <iostream>
using namespace std;
#include<array>

int main()
{
    array <int,6>arr = {1,2,3,4,5,6};
    array <int,6>arr1 = {};
    if(arr.empty())
        cout<<"Given array is empty"<<endl;
    else
        cout<<"Given array not empty"<<endl;

    cout<<arr1[1];
    if(arr1.empty())
        cout<<"Given array is empty"<<endl;
    else
        cout<<"Given array not empty"<<endl;
        

    return 0;

}
