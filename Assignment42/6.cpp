#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(1);
    q.push(9);
    q.push(8);
    queue<int> q1;
    if(q.empty())
        cout<<"Queue q is empty"<<endl;
    else
        cout<<"Queue q is not empty"<<endl;

    if(q1.empty())
        cout<<"Queue q1 is empty"<<endl;
    else
        cout<<"Queue q1 is not empty"<<endl;
    cout<<"Size of q: "<<q.size()<<endl;
    cout<<"Size of q1: "<<q1.size()<<endl;

return 0;
}