#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    cout<<"Top element: "<<s.top()<<endl;
    if(s.empty())
    cout<<"stack is empty";
    else
    cout<<"stack is not empty"<<endl;
    cout<<"Size: "<<s.size()<<endl;
    s.pop();
    cout<<"After pop now top element is "<<s.top()<<endl;

    return 0;
}

