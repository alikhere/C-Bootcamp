#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> um;
    um.insert(pair<string, int>("ali", 10));
    um.insert(pair<string, int>("ankit", 30));
    um.insert(pair<string, int>("dhruv", 20));
    um.insert(pair<string, int>("om", 40));

    unordered_map<string, int> um1(um);


    for(auto x = um1.begin(); x!=um1.end(); x++)
        cout<<"Key : "<<x->first<<" Value: "<<x->second<<endl;
    return 0;
}