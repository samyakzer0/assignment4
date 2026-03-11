#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    int left = 0 ;
    int right = m-1;
    int top = 0;
    int bottom = n-1;

    while(left<=right && top<=bottom){
        for(int i = left ; i <= right ; i++){
            cout << arr[top][i] << " ";
        }
        top++;

        for(int i = top ; i<=bottom ; i++){
            cout <<arr[i][right]<< " ";
        }
        bottom--;

        for(int i = right ; i>= left ; i--){
            cout << arr[bottom][i]  << " ";
        }
        left++;

        for(int i = bottom ; i>= top ; i--){
            cout << arr[i][left] << " ";
        }
            right--;

            
    }
    return 0;
}