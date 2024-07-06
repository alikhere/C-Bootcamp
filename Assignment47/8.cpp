#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Method 1: Initialize using direct assignment with an initializer list
    unordered_map<int, string> map1 = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"}
    };

    // Display the contents of map1
    cout << "Contents of map1:" << endl;
    for (const auto& pair : map1) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Method 2: Initialize using the subscript operator
    unordered_map<int, string> map2;
    map2[1] = "uno";
    map2[2] = "dos";
    map2[3] = "tres";
    map2[4] = "cuatro";

    // Display the contents of map2
    cout << "Contents of map2:" << endl;
    for (const auto& pair : map2) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
