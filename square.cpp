#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

     vector<int> ans(n);
     for (int i = 0 ; i< n ; i++){
        ans[i] = arr[i]*arr[i];
     }
        sort(ans.begin(), ans.end());
        for (int i = 0 ; i<n ; i++){
            cout << ans[i] << endl;
        }
    return 0;
}