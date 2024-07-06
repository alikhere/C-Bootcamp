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
    queue<int> q1(q);
    q1.push(11);
    q1.push(12);

    queue<int> qtemp;
    qtemp = q;
    q = q1;
    q1 = qtemp;
    cout<<"After exchange: "<<endl;
    cout<<"q"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl<<"q2"<<endl;
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    

    
return 0;
}