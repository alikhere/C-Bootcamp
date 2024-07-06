#include <iostream>
#include <list>
using namespace std;

int main()
{   list<int> l1 = {3,4,1,1,2,};
    list<int> l2(l1.begin(), l1.end());
    for(auto x = l2.begin(); x != l2.end(); x++)
        cout<<*x<<" ";
    return 0;
}