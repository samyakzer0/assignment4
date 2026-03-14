#include <iostream>
#include <vector>
using namespace std;

int newNum(int n){
     int sum = 0;

  while(n!=0){
    int k = n%10;
    sum = sum + k*k;
    n = n/10;
    }
return sum;
}

int main() {
    int n;
    cin>>n;
    vector<int> list;
    for(int i = 0 ; i < list.size(); i++){
        if(list[i] == n){
            cout << "false";
            return 0;
        }
    }
    list.push_back(n);
    n = newNum(n);

    cout << "true";

    return 0;
}