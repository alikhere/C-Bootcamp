#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> arr = {4,5,1,9,2,9};
    vector<int>::iterator x;
    for(auto x = arr.rbegin(); x!=arr.rend(); x++)
        cout<<*x<<" ";
    return 0;    
}