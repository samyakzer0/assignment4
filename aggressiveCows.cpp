#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &stalls , int cows , int mid){
    int cowsPlaced = 1;
    int lastPosition = stalls[0];

    for(int i = 1 ; i < stalls.size() ; i++){
        if(stalls[i]-lastPosition >= mid){
            cowsPlaced++;
            lastPosition= stalls[i];
            if(cowsPlaced == cows){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
	int c;
	cin>>c;
    vector<int> stalls(n);
    for(int i = 0 ; i < n ; i++){
        cin >> stalls[i];
    }

    sort(stalls.begin(),stalls.end());

    int low = 0;
    int high = stalls[n-1]-stalls[0];
    int ans = 0;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(isPossible(stalls,c,mid)){
            ans = mid;
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}