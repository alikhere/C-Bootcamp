#include <iostream>
#include <stack>
#include <forward_list>
using namespace std;

int main()
{
    stack<int> s;
    s.push(11);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    forward_list<int> l;
    while(!s.empty())
    {
        l.push_front(s.top());
        s.pop();
    }
    l.sort();
    for(auto x = l.begin(); x!=l.end(); x++ )
        s.push(*x);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

