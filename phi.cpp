
#include <iostream>
#include <vector>

using namespace std;

// Define the upper limit (1 Million + 5)
const int LIMIT = 1000005;
long long phi[LIMIT];

// Precalculate Euler's Totient Function for all numbers up to LIMIT
void precompute_phi() {
    // 1. Initialize: Assume phi(i) = i for all i
    for (int i = 0; i < LIMIT; i++) {
        phi[i] = i;
    }

    // 2. Sieve-like approach to update phi values
    for (int i = 2; i < LIMIT; i++) {
        // If phi[i] is still i, then i must be a prime number
        if (phi[i] == i) {
            for (int j = i; j < LIMIT; j += i) {
                // Apply the formula: phi(j) = phi(j) * (1 - 1/i)
                // We write it as (phi[j] / i) * (i - 1) or phi[j] -= phi[j]/i
                // to keep everything in integer math.
                phi[j] -= phi[j] / i;
            }
        }
    }
}

int main() {
    // Speed up I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Step 1: Precalculate
    precompute_phi();

    // Step 2: Handle queries
    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        // Step 3: Output precalculated answer in O(1)
        cout << phi[n] << "\n";
    }

    return 0;
}