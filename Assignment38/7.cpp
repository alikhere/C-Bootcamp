#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{   list<int> l = {3,4,1,2};
    l.push_back(11);
    l.push_front(7);
    list<int>::iterator x;
    for(x = l.begin(); x != l.end(); x++)
        cout<<*x<<" ";
    return 0;
}