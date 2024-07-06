#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l1 = {4,5,9,1,2};
    forward_list<int> l2 = {3,8,20};
    l2.merge(l1);
    for(auto x = l2.begin(); x!=l2.end(); x++)
        cout<<*x<<" "; 
    return 0;
}