#include <iostream>
#include <list>
using namespace std;

int main()
{   list<int> l1 = {3,4,1,1,2,};
    list<int> l2 = {7,8,9,11,2};
    l2.merge(l1);
    for(auto x = l2.begin(); x != l2.end(); x++)
        cout<<*x<<" ";
    return 0;
}