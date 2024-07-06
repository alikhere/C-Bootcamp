#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second; // Compare based on values in descending order
}

int main() {
    // Initialize the map
    map<int, int> myMap = {
        {1, 6},
        {2, 8},
        {6, 3},
        {8, 2}
    };

    // Create a vector of pairs and copy key-value pairs from the map to the vector
    vector<pair<int, int>> vec(myMap.begin(), myMap.end());

    // Sort the vector based on the values in descending order
    sort(vec.begin(), vec.end(), comparePairs);

    // Display the sorted key-value pairs
    cout << "Sorted map based on values in descending order:" << endl;
    for (const auto& pair : vec) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}
