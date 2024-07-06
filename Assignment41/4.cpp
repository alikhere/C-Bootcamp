#include <iostream>
#include <stack>
using namespace std;

void Reverse(string str)
{
    stack<string> st;
    string temp = "";

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!= ' ')
            temp = temp + str[i];
        else {
            st.push(temp);
            temp = "";
        }
    }
    st.push(temp);
    while(!st.empty())
    {
        temp = st.top();
        cout<<temp<<" ";
        st.pop();
    }
}
int main()
{
    string s = " I love to play chess";
    Reverse(s);
    return 0;
}

