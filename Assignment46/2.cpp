#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m.insert(pair<string,int>("A",10));
    m.insert(pair<string,int>("B",15));
    m.insert(pair<string,int>("C",20));
    m.insert(pair<string,int>("D",25));

    for(auto x = m.begin(); x!= m.end(); x++)
        cout<<"Key : "<<x->first<<" , Value : "<<x->second<<endl;
    return 0;
}