#include <iostream>
#include <queue>
using namespace std;

void Merge(vector<int>& v1, vector<int>& v2, vector<int>& v3)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int num : v1)
        pq.push(num);
    for(int num : v2)
        pq.push(num);
    while(!pq.empty())
    {
        v3.push_back(pq.top());
        pq.pop();
    }

}
int main()
{
    vector<int> v1 = {3,6,8,9};
    vector<int> v2 = {5,7,12,14};
    vector<int> v3;
    Merge(v1,v2,v3);
    for(int num : v3)
        cout<<num<<" ";
    cout<<endl;
    return 0;
}


