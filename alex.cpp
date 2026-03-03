#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> items(n);
    for (int i = 0; i < n; i++) {   
        cin >> items[i];
    }

    int queries;
    cin >> queries;
    
    vector<int> query(queries);
    vector<int> requirement(queries);
    for (int i = 0; i < queries; i++) {
        cin >> query[i] >> requirement[i];
    }

    
    for (int i = 0; i < queries; i++) {
        int count = 0;
        
        for (int j = 0; j < n; j++) {
            if (query[i] % items[j] == 0) {
                count++;
            }
        }

        
        if (count >= requirement[i]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}