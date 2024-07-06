#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.assign(4,5);
    d.push_back(10);
    for(auto x = d.begin(); x!=d.end(); x++)
        cout<<*x<<" ";
    return 0;
}