#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> answer(n);
    for (int i = 0 ; i<n ; i++){
        int num;
        cin>>num;

        int sum =0;
        int pos = 0;
        while(num!=0){
            int digit = num%10;
            sum = sum + digit * (int)pow(2,pos);
            pos++;
            num = num/10;
        }

        answer[i] = sum;
    }
    for (int i = 0 ; i<n ; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}