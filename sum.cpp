#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long add = pow(10,9)+7;

int main() {
    int n;
    cin>>n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int testcases;
    cin>> testcases;
    while(testcases!=0){
        int x;
        cin>>x;
        testcases--;
        
        vector<long long> newArr(n);
        for (int i = 0; i < n; i++) {
          if (i - x < 0) {
            newArr[i] = (arr[i] + arr[ i - x + n]) % add;
          } else {
            newArr[i] = (arr[i] + arr[i - x]) % add;
          }
        }
        
        arr = newArr;
    }
    
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum = (sum + arr[i]) % add;
    }
    
    cout << sum << endl;
    
    return 0;
}