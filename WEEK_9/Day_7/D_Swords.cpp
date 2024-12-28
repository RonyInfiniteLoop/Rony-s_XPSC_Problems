#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll find_gcd(vector<ll>& v) {
    ll gcd = v[0];
    for (int i = 1; i < v.size(); ++i) {
        gcd = __gcd(gcd, v[i]);
    }
    return gcd;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n);
    ll total_swords = 0;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        total_swords += v[i];
    }

    ll max_value = *max_element(v.begin(), v.end());

    vector<ll> diff(n);
    for (int i = 0; i < n; ++i) {
        diff[i] = max_value - v[i];
    }

    ll gcd = find_gcd(diff);

    ll y = 0;
    for (int i = 0; i < n; ++i) {
        y += diff[i] / gcd;
    }
    
    cout << y << " " << gcd << endl;

    return 0;
}
