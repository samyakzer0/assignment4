#include <iostream>
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
    for(int i = 0; i < n; i++){
        ans[arr[i]] = i;
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}