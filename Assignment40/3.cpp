#include <iostream>
#include <deque>
using namespace std;
auto  Rend()
{
    deque<int> d = {3,4,6,7};
    auto x = d.rend();
    return x;

}
int main()
{
    auto x = Rend();
    return 0;
}