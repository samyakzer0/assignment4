#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        int n;
        cin >> n;

        vector<int> roses(n);
        for (int i = 0; i < n; i++) {
            cin >> roses[i];
        }

        int m;
        cin >> m;

        int ans1 = 0;
        int ans2 = 0;
        int bestDiff = 1000001;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (roses[i] + roses[j] == m) {
                    int first = min(roses[i], roses[j]);
                    int second = max(roses[i], roses[j]);
                    int diff = second - first;

                    if (diff < bestDiff) {
                        bestDiff = diff;
                        ans1 = first;
                        ans2 = second;
                    }
                }
            }
        }

        cout << "Deepak should buy roses whose prices are " << ans1
             << " and " << ans2 << "." << '\n' << '\n';
    }

    return 0;
}