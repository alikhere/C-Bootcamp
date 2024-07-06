#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l1 = {3,2,9};
    forward_list<int> l2 = {8,1,2};
    l2.swap(l1);
    for(auto x = l1.begin(); x!=l1.end(); x++)
        cout<<*x<<" "; 
    cout<<endl;    
    for(auto x = l2.begin(); x!=l2.end(); x++)
        cout<<*x<<" "; 
    return 0;
}