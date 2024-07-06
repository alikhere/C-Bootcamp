#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void Prime(int l, int r, int k)
{
    vector<int> v;
    unordered_map<int, int> um;
    for(int i=l; i<=r; i++)
    {
        int num =2;
        for(; num<=i/2; num++) {
            if(i % num == 0)
                break;
        }
        if(num == i/2 +1)
            v.push_back(i);
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i+1; j<v.size(); j++)
        {
            if(v[j] - v[i] == k)
            {
                um.insert(pair<int, int>(v[i],v[j]));
            }
        }
    }
    for(auto x = um.begin(); x!=um.end(); x++)
        cout<<"("<<x->first<<" , "<<x->second<<")"<<endl;
}

int main()
{
    int l=1,r=19,k=6;
    Prime(l,r,k);
    return 0;

}