#include<iostream>
using namespace std;

int max(int arr[], int n){
	int max = arr[0];
	for (int i = 0 ; i < n ; i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int main() {
	int arr[3];
     int n = sizeof(arr)/sizeof(n);

    for(int i = 0 ; i< n ; i++){
        cin >> arr[i];
    }

	cout << max(arr,n);
	return 0;
}