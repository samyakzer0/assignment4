// Deepak has a limited amount of money that he can spend on his girlfriend. So he decides to buy two roses for her. Since roses are of varying sizes, their prices are different. Deepak wishes to completely spend that fixed amount of money on buying roses for her.
// As he wishes to spend all the money, he should choose a pair of roses whose prices when summed up are equal to the money that he has.
// Help Deepak choose such a pair of roses for his girlfriend.

// NOTE: If there are multiple solutions print the solution that minimizes the difference between the prices i and j. After each test case, you must print a blank line.


// Input Format
// The first line indicates the number of test cases T.
// Then, in the next line, the number of available roses, N is given.
// The next line will have N integers, representing the price of each rose, a rose that costs less than 1000001.
// Then there is another line with an integer M, representing how much money Deepak has.
// There is a blank line after each test case.

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        // Store roses as {price, original_index}
        vector<pair<int, int>> roses(N);
        for (int i = 0; i < N; i++) {
            cin >> roses[i].first;
            roses[i].second = i + 1; // 1-based indexing
        }
        
        int M;
        cin >> M;
        
        // Sort by price to use two-pointer technique
        sort(roses.begin(), roses.end());
        
        int left = 0, right = N - 1;
        int minDiff = INT_MAX;
        int idx1 = -1, idx2 = -1;
        
        // Two-pointer approach to find pairs that sum to M
        while (left < right) {
            int sum = roses[left].first + roses[right].first;
            
            if (sum == M) {
                // Found a valid pair
                int diff = roses[right].first - roses[left].first;
                if (diff < minDiff) {
                    minDiff = diff;
                    idx1 = roses[left].second;
                    idx2 = roses[right].second;
                }
                left++;
                right--;
            } else if (sum < M) {
                left++;
            } else {
                right--;
            }
        }
        
        // Ensure idx1 < idx2 for output
        if (idx1 > idx2) swap(idx1, idx2);
        cout << "Deepak should buy roses " << idx1 << " and " << idx2 << "." << endl;
        cout << endl; // blank line after each test case
    }
    
    return 0;
}