#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int Operation(vector<int>& v)
{
    priority_queue<int> p;
    for(int num : v)
        p.push(num);
    while(p.size()>=2)
    {
        int first = p.top();
        p.pop();
        int second = p.top();
        p.pop();

        if(first != second)
        {
            p.push(abs(first-second));
        }
    }
    if(p.empty())
    return -1;
    else
    return 1;
        
}

int main()
{
    vector<int> v = {1,3,9,7,5,13};
    cout<<Operation(v)<<endl;
    return 0;
}
