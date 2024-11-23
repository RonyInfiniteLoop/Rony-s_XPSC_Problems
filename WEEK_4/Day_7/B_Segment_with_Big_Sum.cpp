#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    ll ans = LLONG_MAX; 
    ll l = 0, sum = 0;

    for (ll r = 0; r < n; r++) 
    {
        sum += v[r]; 

        while (sum >= k) 
        {
            ans = min(ans, r - l + 1); // Update the minimum length
            sum -= v[l]; 
            l++;
        }
    }

    if (ans == LLONG_MAX) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
