#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Function to merge two maps
map<string, vector<int>> mergeMaps(const map<string, vector<int>>& map1, const map<string, vector<int>>& map2) {
    // Initialize the result map with the contents of map1
    map<string, vector<int>> result = map1;

    // Iterate through each key-value pair in map2
    for (const auto& pair : map2) {
        const string& key = pair.first;
        const vector<int>& values = pair.second;

        // Check if the key exists in result (initially map1)
        if (result.find(key) != result.end()) {
            // Merge the arrays if the key is common
            result[key].insert(result[key].end(), values.begin(), values.end());
            // Sort and remove duplicates if necessary
            sort(result[key].begin(), result[key].end());
            result[key].erase(unique(result[key].begin(), result[key].end()), result[key].end());
        } else {
            // Add the key-value pair if the key is not present
            result[key] = values;
        }
    }

    return result;
}

int main() {
    // Initialize the two maps
    map<string, vector<int>> map1 = {
        {"key1", {0, 1}},
        {"key2", {0, 1}}
    };

    map<string, vector<int>> map2 = {
        {"key2", {1, 2}},
        {"key3", {3, 4}}
    };

    // Merge the maps
    map<string, vector<int>> result = mergeMaps(map1, map2);

    // Display the merged map
    cout << "Merged map:" << endl;
    for (const auto& pair : result) {
        cout << pair.first << ": {";
        for (size_t i = 0; i < pair.second.size(); ++i) {
            cout << pair.second[i];
            if (i < pair.second.size() - 1) {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }

    return 0;
}
