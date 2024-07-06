#include <iostream>
using namespace std;
#include <algorithm>
#include<array>

int main()
{
    array <int,6>arr = {1,2,3,4,5,6};
    sort(arr.begin(), arr.end(), greater<int> ());
    for(int i=0; i<arr.size(); i++)
        cout<<arr.at(i)<<" ";
    return 0;

}
