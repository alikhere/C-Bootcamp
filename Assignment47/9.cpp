#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int minDeletion(string& str)
{
    unordered_map<char, int> um;
    unordered_set<int> s;
    for(char x : str)
        um[x]++;
    int freq;
    int deletion =0;
    for(auto x : um)
    {
        int freq = x.second;
        while(freq > 0 && s.find(freq) != s.end())
        {
            freq--;
            deletion++;
        }
        if(freq > 0)
            s.insert(freq);
    }
    return deletion;
}
int main()
{
    string s = "ceabaacb";
    int freq = minDeletion(s);
    cout<<freq<<endl;
    
}