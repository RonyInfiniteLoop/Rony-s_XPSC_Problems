#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            p[i]--;  // To make it 0-indexed
        }

        bool found_pair = false;
        for (int i = 0; i < n; i++) {
            if (p[p[i]] == i) {
                found_pair = true;
                break;
            }
        }

        if (found_pair) {
            cout << 2 << "\n";
        } else {
            cout << 3 << "\n";
        }
    }
    
    return 0;
}
