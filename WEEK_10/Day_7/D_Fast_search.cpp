#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll manualLowerBound(const vector<ll>& v, ll l) {
    ll left = 0, right = v.size();
    while (left < right) {
        ll mid = left + (right - left) / 2;
        if (v[mid] >= l) right = mid;
        else left = mid + 1;
    }
    return left;
}

ll manualUpperBound(const vector<ll>& v, ll r) {
    ll left = 0, right = v.size();
    while (left < right) {
        ll mid = left + (right - left) / 2;
        if (v[mid] > r) right = mid;
        else left = mid + 1;
    }
    return left;
}

ll search(vector<ll>& v, ll l, ll r) {
    ll low = manualLowerBound(v, l);
    ll high = manualUpperBound(v, r);
    return high - low;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    
    int k;
    cin >> k;
    while (k--) {
        ll l, r;
        cin >> l >> r;
        cout << search(v, l, r) << " ";
    }
    
    cout << "\n";
    return 0;
}
