#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {2,3,6,7,3,9,23};
    reverse(v.begin(), v.end());
    for(int i =0; i<v.size(); i++)
        cout<<v.at(i)<<" ";
    return 0;
}