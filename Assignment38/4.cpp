#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{   list<int> l = {3,4,1,2};
    list<int>::iterator x;
    for(auto x = l.rbegin(); x != l.rend(); x++)
        cout<<*x<<" ";
    return 0;
}