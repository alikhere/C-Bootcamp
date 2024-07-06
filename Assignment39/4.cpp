#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.assign({1,2,3,4,5,6,7,8,9,10});
    l.reverse();
    for(auto x = l.begin(); x!=l.end(); x++)
        cout<<*x<<" ";
    return 0;

}