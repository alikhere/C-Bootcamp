#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.assign({1,2,3,4,5,6,7,8,9,10});
    int sum=0;
    for(auto x = l.begin(); x!=l.end(); x++)
        sum+=*x;
    cout<<"Sum: "<<sum<<endl;  
    return 0;
}