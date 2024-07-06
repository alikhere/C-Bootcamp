#include <iostream>
#include <forward_list>
using namespace std;

int main()
{   forward_list<int> l1 = {3,4,1,1,2,};
    forward_list<int> l2(l1.begin(), l1.end());
    for(auto x = l2.begin(); x != l2.end(); x++)
        cout<<*x<<" ";
    return 0;
}