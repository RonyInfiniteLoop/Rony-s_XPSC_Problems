#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // Step 1: Generate the initial array in descending order
        vector<int> problems(n);
        for (int i = 0; i < n; i++) {
            problems[i] = n - i;
        }

        // Step 2: Reverse the last (k+1) elements
        if (k > 0) {
            reverse(problems.end() - (k + 1), problems.end());
        }

        // Step 3: Output the result
        for (int x : problems) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
