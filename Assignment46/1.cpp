#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,15));
    m.insert(pair<int,int>(3,20));
    m.insert(pair<int,int>(4,25));

    for(auto x = m.begin(); x!= m.end(); x++)
        cout<<"Key : "<<x->first<<" , Value : "<<x->second<<endl;
    return 0;
}