#include <iostream>
#include <queue>
#include <array>
using namespace std;

int Count(array<int,5> a1, array<int,5> a2, array<int,5> a3)
{
    priority_queue<int, vector<int>, greater<int>> p1;
    priority_queue<int, vector<int>, greater<int>> p2;
    priority_queue<int, vector<int>, greater<int>> p3;
    for(int num : a1)
        p1.push(num);
    for(int num : a2)
        p2.push(num);
    for(int num : a3)
        p3.push(num);
    int count =0;
    while(!p1.empty())
    {
        if(p1.top() < p2.top()  && p2.top() < p3.top())
            count++;
        p1.pop();
        p2.pop();
        p3.pop();
    }
    return count;

}
int main()
{
    array<int, 5> a1 = {1,2,4,6,7};
    array<int, 5> a2 = {1,4,4,6,8};
    array<int, 5> a3 = {4,6,7,8,12};
    cout<<Count(a1,a2,a3)<<endl;
    return 0;
}