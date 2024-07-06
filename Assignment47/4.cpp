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
    string key;
    cout<<"Enter the key: ";
    cin>>key;
    auto x = um.find(key);
    if(x != um.end())
        cout<<"Key found "<<x->first<<" -> "<<x->second<<endl;
    else
        cout<<"Key not found"<<endl;
    return 0;
}