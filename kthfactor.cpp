#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> factors;
    for(int i = 1 ; i <= n ; i++){
        if(n%i==0){
            factors.push_back(i);
        }
    }
    if (k<factors.size()){
    cout << factors[k-1];
    }
    else{
        cout << -1;
    }
    return 0;
}