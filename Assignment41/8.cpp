#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    stack<int> s;
    s.push(11);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    vector<int> v;
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    sort(v.begin(),v.end());
    for(auto x = v.rbegin(); x!=v.rend(); x++ )
        s.push(*x);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

