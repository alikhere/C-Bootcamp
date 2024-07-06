#include <iostream>
#include <map>
#include <cmath>

using namespace std;

bool isDifferenceOfCubes(int N) {
    map<int, int> cubes; // Map to store perfect cubes and their roots

    // Generate perfect cubes up to a reasonable limit
    int limit = cbrt(N) + 1; // We only need to go up to the cube root of N plus some margin
    for (int i = 1; i <= limit; ++i) {
        cubes[i * i * i] = i;
    }

    // Check if N can be expressed as the difference of two cubes
    for (auto it = cubes.begin(); it != cubes.end(); ++it) {
        int cube1 = it->first;
        int cube2 = cube1 - N;
        if (cube2 > 0 && cubes.find(cube2) != cubes.end()) {
            return true; // Found such cubes
        }
    }

    return false; // No such cubes found
}

int main() {
    int N = 37;
    if (isDifferenceOfCubes(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
