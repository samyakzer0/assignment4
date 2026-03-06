#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    while(testcases != 0) {
        testcases--;
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        long long maxSum = arr[0];
        long long sum = 0;

        for (int j = 0; j < n; j++) { 
            sum = sum + arr[j];
            maxSum = max(maxSum, sum);
            
            if (sum < 0) {
                sum = 0;
            }
        } 
            
        cout << maxSum << endl;
    }
    return 0;
}