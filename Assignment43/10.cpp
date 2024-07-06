#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int smallestSubsequenceSum(vector<int>& arr, int K) {
    priority_queue<int> pq(arr.begin(), arr.end()); // Max-heap

    int sum = 0;
    int count = 0;

    while (!pq.empty() && sum < K) {
        sum += pq.top();
        pq.pop();
        count++;
    }

    if (sum >= K) {
        return count;
    } else {
        return -1;
    }
}

int main() {
    vector<int> arr1 = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5};
    int K1 = 35;
    int result1 = smallestSubsequenceSum(arr1, K1);
    cout << "Result 1: " << result1 << endl;  // Output should be 4

    vector<int> arr2 = {1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12};
    int K2 = 70;
    int result2 = smallestSubsequenceSum(arr2, K2);
    cout << "Result 2: " << result2 << endl;  // Output should be -1

    return 0;
}
