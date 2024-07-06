#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {2,3,6,7,3,9,23};
    cout<<"Maximum element: " <<*max_element(v.begin(), v.end())<<endl;
    return 0;
}