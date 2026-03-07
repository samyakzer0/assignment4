#include <vector>
#include <iostream>
using namespace std;

    int main(){
        int n;
        cin>>n;
        vector<long long> nums(n);
        for(int i = 0 ; i<n ;i++){
            cin>>nums[i];
        }

        vector<long long> answer(n);
        vector<long long> left(n,1);
        vector<long long> right(n,1);
        

        for(int i = 1 ; i<n ;i++){
            left[i]=left[i-1]*nums[i-1];
        }

     

        for (int i = n-2 ; i>=0 ; i--){
            right[i]=right[i+1]*nums[i+1];
        }

        for(int i = 0 ; i<n ; i++){
            answer[i]=left[i]*right[i];
        }
 
        for(int i = 0 ; i<n ; i++){
            cout<<answer[i]<<" ";
        }
    }
