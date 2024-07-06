#include <iostream>
#include <vector>
using namespace std;

void Input(vector<int>& v)
{
    int x;
    cout<<"Enter 5 element of the array"<<endl;
    for(int i=0; i<v.size(); i++) {
        cin>>x;
        v.push_back(x);
    }
        
}

void Print(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
        cout<<" "<<v[i];
}
int main()
{
    vector<int> v;
    Input(v);
    Print(v);
    return 0;
}