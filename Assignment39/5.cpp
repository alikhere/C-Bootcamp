#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.assign({10,2,2,3,4,5,0});
    l.unique();
    for(auto x = l.begin(); x!=l.end(); x++)
        cout<<*x<<" "; 
    return 0;
}