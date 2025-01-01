#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> x(n);
    for (ll i = 0; i < n; i++) {
        cin >> x[i];
    }

    map<ll, ll> freq;
    ll start = 0, distinct_count = 0, result = 0;

    for (ll end = 0; end < n; end++) {
        freq[x[end]]++;
        if (freq[x[end]] == 1) {
            distinct_count++;
        }

        while (distinct_count > k) {
            freq[x[start]]--;
            if (freq[x[start]] == 0) {
                distinct_count--;
            }
            start++;
        }

        result += (end - start + 1);
    }

    cout << result << "\n";
    return 0;
}

