#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {4,6,7,1,5};
    for(int i=0; i<v.size(); i++)
        cout<<" "<<v.at(i);
    return 0;
}