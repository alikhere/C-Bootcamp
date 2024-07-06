#include <iostream>
#include <deque>
using namespace std;
auto  Rbegin()
{
    deque<int> d = {3,4,6,7};
    auto x = d.rbegin();
    return x;

}
int main()
{
    auto x = Rbegin();
    return 0;
}