#include <iostream>
#include <stack>
using namespace std;

void Reverse(string str)
{
    stack<char> st;
    for(int i=0; i<str.length(); i++)
        st.push(str[i]);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}
int main()
{
    string s = "Keanu Reevs";
    Reverse(s);
    return 0;
}

