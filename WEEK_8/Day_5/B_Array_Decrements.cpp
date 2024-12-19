#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int dif = INT_MAX;
        bool valid = true;

        for (int i = 0; i < n; i++) {
            if (b[i] != 0) {
                dif = min(dif, a[i] - b[i]);
            }
        }

        if (dif < 0) {
            valid = false;
        } else {
            for (int i = 0; i < n; i++) {
                if (a[i] - b[i] > dif || (b[i] != 0 && a[i] - b[i] < dif)) {
                    valid = false;
                    break;
                }
            }
        }

        cout << (valid ? "YES" : "NO") << "\n";
    }
    return 0;
}
