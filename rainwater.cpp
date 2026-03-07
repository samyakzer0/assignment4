#include <iostream>
#include <vector>
using namespace std;

int main() {
   int testcases;
    cin >> testcases;
    while (testcases != 0) {
        testcases--;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int leftBar = 0;
    int rightBar = n-1;
    int leftMax = 0;
    int rightMax = 0;
    int water = 0;

    while(leftBar < rightBar) {
        leftMax = max(leftMax, arr[leftBar]);
        rightMax = max(rightMax, arr[rightBar]);

        if(leftMax < rightMax){
            water = water + (leftMax - arr[leftBar]);
            leftBar++;
        }
        else {
            water = water + (rightMax - arr[rightBar]);
            rightBar--;
        }
        
    }
    cout << water << endl;
}

    return 0;
}