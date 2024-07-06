#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {2,8,4,3,12,22};
    auto k = d.begin();
    k++;
    cout<<"After deleting element of positon 2"<<endl;
    for(auto k = d.begin(); k!=d.end(); k++)
        cout<<*k<<" ";
    auto x = d.begin();
    auto y = d.end();
    x++;
    y--;
    d.erase(x,y);
    cout<<endl<<"After deleting element from index 1 to n-1"<<endl;
    for(auto x = d.begin(); x!=d.end(); x++)
        cout<<*x<<" ";
    return 0;
}