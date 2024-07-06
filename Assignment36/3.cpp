#include <iostream>
using namespace std;
#include<array>

int main()
{
    array <int,6>arr = {1,2,3,4,5,6};
    cout<<"First: "<<arr.front()<<" Last: "<<arr.back()<<endl;
    return 0;

}
