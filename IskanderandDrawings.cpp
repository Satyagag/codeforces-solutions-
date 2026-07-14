#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int currentRun = 0;
        int maxTime = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                currentRun++;
            } else {
                maxTime = max(maxTime, (currentRun + 1) / 2);
                currentRun = 0;
            }
        }

        // Check the last segment if the string ends with '#'
        maxTime = max(maxTime, (currentRun + 1) / 2);

        cout << maxTime << "\n";
    }

    return 0;
}
