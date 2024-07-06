#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include <climits>
using namespace std;

int max_Element(vector<int>& arr)
{
    unordered_map<int, int> freqMap;

    // Step 1: Calculate the frequency of each element
    for (int num : arr) {
        freqMap[num]++;
    }

    // Step 2: Find the minimum frequency
    int minFrequency = INT_MAX;
    for (const auto& entry : freqMap) {
        if (entry.second < minFrequency) {
            minFrequency = entry.second;
        }
    }

    // Step 3: Find the maximum element with the minimum frequency
    int maxElement = INT_MIN;
    for (const auto& entry : freqMap) {
        if (entry.second == minFrequency) {
            if (entry.first > maxElement) {
                maxElement = entry.first;
            }
        }
    }

    return maxElement;
}

int main()
{
    vector<int> v = {50,50,40,2,2,2};
    int freq = max_Element(v);
    cout<<freq<<endl;
    return 0;
    
}