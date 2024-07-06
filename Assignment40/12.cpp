#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<char> dq;
    string s = "a##l#i";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='#')
            dq.push_back(s[i]);
    }
    for(auto x = dq.begin(); x!=dq.end(); x++)
        cout<<*x;
    return 0;
}