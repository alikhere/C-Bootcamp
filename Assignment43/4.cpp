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
    int i=1;
    while(!pq.empty())
    {
        cout<<"Elemen "<<i<<" : "<<pq.top()<<endl;
        pq.pop();
        i++;
    }
}


