#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(8);
    v.push_back(11);
    for(int i=0; i<v.size(); i++)
        cout<<" "<<v.at(i);
    return 0;
}