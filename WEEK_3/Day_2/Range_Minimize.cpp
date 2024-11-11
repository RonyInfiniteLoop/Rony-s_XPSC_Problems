#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> A(n);
        for (ll i = 0; i < n; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        if (n <= 3) {
            cout << 0 << endl;
            continue;
        }

        int diff_1 = A[n - 1] - A[2];
        int diff_2 = A[n - 3] - A[0];
        int diff_3 = A[n - 2] - A[1];

        cout << min(diff_1, min(diff_2, diff_3)) << endl;
    }

    return 0;
}
