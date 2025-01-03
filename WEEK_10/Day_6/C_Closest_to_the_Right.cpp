#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int closest_to_right(const vector<ll>& v, ll q) 
{
    ll left = 0, right = v.size(); 
    while (left < right) 
    {
        ll mid = (right + left) / 2;
        if (v[mid] >= q) 
        {
            right = mid; 
        } 
        else {
            left = mid + 1; 
        }
    }
    return left + 1; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    while (k--) {
        ll q;
        cin >> q;
        int result = closest_to_right(v, q);
        if (result > n) result = n + 1;
        cout << result << "\n";
    }
    
    return 0;
}
