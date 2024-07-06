#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{   list<char> l = {'A','m','a','n'};
    list<char>::const_iterator x;
    for(x = l.begin(); x != l.end(); x++)
        cout<<*x<<" ";
    return 0;
}