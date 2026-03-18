#include <iostream>
#include <vector>   
using namespace std;


bool canPaint(vector<int>& boards , int k , int m){
    int p = 1;
    int t = 0;
    for(int i = 0 ; i < boards.size() ; i++){
     if(boards[i]+t<=m){
        t=t+boards[i];
     }
     else {
        p++;
        t=boards[i];
     }
    }
    return p<=k;
}

int main() {
    int k,n;
    cin>>k>>n;
    long long maximum = 0;
    long long sum = 0;
    vector<int> boards(n);
    for(int i = 0 ; i < n ; i++){
        cin >> boards[i];
        sum = sum + boards[i];
        maximum = max(maximum,(long long)boards[i]);
    }
    long long low = maximum;
    long long high = sum;
    long long ans = 0;
    while(low<=high){
        long long mid = low + (high-low)/2;
        if(canPaint(boards,k,mid)){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}