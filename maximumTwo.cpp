#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    while(testcases!=0){
        testcases--;
        int n,m;
        cin >> n >> m;
        vector<int> nums1(n);
        vector<int> nums2(m);
        for(int i = 0 ; i < n ; i++){
            cin >> nums1[i];
        }
        for(int i = 0 ; i < m ; i++){
            cin >> nums2[i];
        }
        
        int maxPath = 0;
        
    return 0;
}