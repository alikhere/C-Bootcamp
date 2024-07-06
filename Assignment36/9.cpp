#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    // Define the input array
    std::vector<int> arr = {1, 2, 3, 2, 3, 1,1, 3};

    // Create an unordered_map to store the frequency of each element
    std::unordered_map<int, int> frequency;

    // Count the frequency of each element in the array
    for (int num : arr) {
        frequency[num]++;
    }

    // Output the elements that have an odd frequency
    std::cout << "Elements that appear an odd number of times:";
    for (const auto& pair : frequency) {
        if (pair.second % 2 != 0) {
            std::cout << pair.first << " ";
        }
    }

    return 0;
}
