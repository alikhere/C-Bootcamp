#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(12);
    d.push_back(15);
    d.push_back(18);
    cout<<"First: "<<d.front()<<endl;
    cout<<"Last: "<<d.back()<<endl;
    return 0;
}