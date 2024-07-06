#include <iostream>
#include <deque>
using namespace std;
auto  Max_Element()
{
    deque<int> d = {3,4,6,7};
    return(d.max_size());

}
int main()
{
    long x = Max_Element();
    cout<<x<<endl;
    return 0;
}