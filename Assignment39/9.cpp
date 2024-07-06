#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l1 = {3,5,1};
    forward_list<int> l2 = {8,7,9,10};
    
    auto x = l2.begin();
    x++;
    l2.splice_after(x,l1,l1.begin(),l1.end());
    for(auto x = l2.begin(); x!=l2.end(); x++)
        cout<<*x<<" ";
    return 0;
    
}