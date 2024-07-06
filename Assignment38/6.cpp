#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{   list<int> l = {3,4,1,2};
    cout<<"first element: "<<l.front()<<endl;
    cout<<"last element: "<<l.back()<<endl;
    return 0;
}