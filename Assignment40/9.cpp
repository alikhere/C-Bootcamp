#include <iostream>
#include <deque>
#include <vector>
using namespace std;

void K_Value(int n, int k)
{
    deque<int> d;
    vector<int> v;
    for(int i=2; i<=n; i++)
        d.push_back(i);
    v.push_back(1);
    bool front = true;
    for(int i=2; i<=n; i++)
    {
        if(k>1)
        {
            front = front ^ 1;
            k--;
        }
        if(front)
        {
            int value = d.front();
            d.pop_front();
            v.push_back(value);

        }
        else
        {
            int value = d.back();
            d.pop_back();
            v.push_back(value);
        }
    }

for(int i=0; i<n; i++)
    cout<<v[i]<<" ";
}
int main()
{
    int N=7, K=2;
    K_Value(N,K);
    return 0;
}