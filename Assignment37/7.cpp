#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {2,3,6,7,3,9,23};
    int sum=0;
    for(int i =0; i<v.size(); i++)
        sum+=v.at(i);
    cout<<"Sum = "<<sum<<endl;
    return 0;
}