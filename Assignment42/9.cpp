#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<char> q;
    q.push('a');
    q.push('m');
    q.push('a');
    q.push('n');
    q.push('g');

    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }

    
return 0;
}