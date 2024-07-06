#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    vector<int> v = {2,33,4,5,88,22};
    cout<<"Enter element to be search: ";
    cin>>x;
    for(int i=0; i<v.size(); i++)
    {
        if(v.at(i) == x)
        {
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}