#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1,4,9,5,4};
    vector<int> v2 = {9,3,2,4};
    vector<int> v;
    vector<int>::iterator x;
    x = v1.begin();
    for(int i=0; i<v2.size(); i++)
    {
        for(int j=0; j<v1.size(); j++)
        {
            if(v2[i] == v1[j])
            {
                v.push_back(v2[i]);
                v1.erase(x+i);
                break;
            }
        }
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" "<<endl;

    return 0;
}