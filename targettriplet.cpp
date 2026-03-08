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
    sort(arr.begin(), arr.end());

        for (int i = 0 ; i<n ; i++){
            for(int j = i+1 ; j<n ; j++){
                for(int k = j+1 ; k<n ; k++){
                    if (arr[i] + arr[j] + arr[k] == target){
                        cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                    }
                }
                
                }
            }
    return 0;
}