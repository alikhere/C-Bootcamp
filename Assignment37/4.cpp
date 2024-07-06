#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2,3,6,7,3,9,23};
    vector<int> v1;
    v1.assign(v.begin(),v.end());
    for(int i =0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
    return 0;
}