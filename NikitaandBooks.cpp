
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool possible = true;

        long long originalSum = 0;
        long long usedSum = 0;
        long long previousStack = 0;

        for (int i = 0; i < n; i++) {
            originalSum += a[i];

            if (i < n - 1) {
                
                long long wanted = previousStack + 1;

                
                if (usedSum + wanted > originalSum) {
                    possible = false;
                    break;
                }

                usedSum += wanted;
                previousStack = wanted;
            } else {
                
                long long leftover = originalSum - usedSum;

                
                if (leftover <= previousStack) {
                    possible = false;
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
