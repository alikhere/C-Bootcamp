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
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
return 0;
}