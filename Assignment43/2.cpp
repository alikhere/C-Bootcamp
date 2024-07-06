#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(12);
    pq.push(44);
    pq.push(11);
    pq.push(2);
    pq.push(4);
    //removing last element
    pq.pop();

    cout<<"Size of the pq: "<<pq.size()<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

}


