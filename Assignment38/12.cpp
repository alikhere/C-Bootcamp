#include <iostream>
#include <list>
#include <array>
using namespace std;

int main()
{   array<int,4> arr = {3,4,1,1};
    list<int> l2(arr.begin(), arr.end());
    for(auto x = l2.begin(); x != l2.end(); x++)
        cout<<*x<<" ";
    return 0;
}