#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{   list<int> l = {3,4,1,1,2,};
    list<int>::iterator x;
    l.unique();
    for(x = l.begin(); x != l.end(); x++)
        cout<<*x<<" ";
    return 0;
}