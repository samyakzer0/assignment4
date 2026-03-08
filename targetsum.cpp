#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
   vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;

        for (int i = 0 ; i<n ; i++){
            for(int j = i+1 ; j<n ; j++){
                if (arr[i] + arr[j]==target){
                    cout << min(arr[i], arr[j]) << " and " << max(arr[i], arr[j]) << endl;
                }
            }
        }
    return 0;
}