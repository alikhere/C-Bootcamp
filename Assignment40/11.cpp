#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {2,8,4,3,12,22};
    cout<<"First: "<<d.front();
    cout<<endl<<"Last: "<<d.back();
    return 0;
}