#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

// Function to find the nearest power of 2 greater than or equal to x
int nearestPowerOf2(int x) {
    if (x < 1) return 1;  // The minimum power of 2 is 1 (2^0)

    int lower = pow(2, floor(log2(x))); // Lower nearest power of 2
    int upper = lower * 2; // Upper nearest power of 2

    // Return the larger one if equidistant
    if (abs(x - lower) == abs(x - upper)) {
        return upper;
    }

    // Return the closer power of 2
    return (x - lower < upper - x) ? lower : upper;
}

int main() {
    int N = 344422;
    unordered_map<int, int> digitFrequency;

    // Calculate frequency of each digit
    while (N > 0) {
        int digit = N % 10;
        digitFrequency[digit]++;
        N /= 10;
    }

    // Output the nearest power of 2 for each frequency
    for (const auto& entry : digitFrequency) {
        int digit = entry.first;
        int frequency = entry.second;
        cout << digit << " -> " << nearestPowerOf2(frequency) << endl;
    }

    return 0;
}
