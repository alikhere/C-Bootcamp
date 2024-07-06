#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l= {2,3,5,6};
    for(auto x = l.begin(); x!= l.end(); x++)
        cout<<*x<<" ";
    return 0;
}