#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> l;
    l.push_back('a');
    l.push_back('l');
    l.push_back('i');
    for(auto x = l.begin(); x != l.end(); x++)
        cout<<*x<<" ";
    return 0;
}