#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {3};
    deque<int>::iterator x;
    x = d.begin();
    cout<<*x;
    return 0;
}