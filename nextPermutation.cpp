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
    int start = arr[0];

    for(int i = 0 ; i < n-1 ; i++){
        if (arr[i] < arr[i+1]){
            start = i;
        }
    }
    for(int j = n-1 ; j >= 0 ; j--){
        if (arr[j] > arr[start]){
            swap(arr[j], arr[start]);
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}