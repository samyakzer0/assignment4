#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &arr , int target){
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]==target){
            return mid;
        }

       if (arr[start] <= arr[mid]) { 
           
            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else { 

            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1; 
            } else {
                end = mid - 1; 
            }
        }
        }
    return -1;
        
    }




int main() {
    int n;
    cin>>n;
  
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
      int key;
    cin>>key;

    int ans = search(arr,key);

    cout    <<ans<<endl;
    return 0;
}