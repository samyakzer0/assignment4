#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;

    while(testcases!=0){
        testcases--;
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
        
        int rickshaw,cabs;
        cin >> rickshaw >> cabs;

        int rickshawCost = 0;
        while(rickshaw!=0){
            rickshaw--;
            int rickshawUse;
            cin>>rickshawUse;
            rickshawCost = rickshawCost + min(rickshawUse*c1,c2);
        }

        rickshawCost = min(rickshawCost,c3);

        int cabsCost = 0;
        while(cabs!=0){
            cabs--;
            int cabsUse;
            cin>>cabsUse;
            cabsCost = cabsCost + min(cabsUse*c1,c2);
        }

        cabsCost = min(cabsCost,c3);

        int totalCost = rickshawCost+cabsCost;

        int finalCost = min(totalCost,c4);

        cout << finalCost << endl;
    }
    return 0;
}