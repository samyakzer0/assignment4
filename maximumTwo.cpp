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
        int maxSum = nums1[0];
        for (int i = 0 ; i< n ; i++){
        for (int j = 0 ; j < m ; j++){
            if (nums2[j] == nums1[i]){
               maxSum = maxSum + nums1[i]*2;
               if (nums2[j])
                
            }
        }
      

    }
    return 0;
}