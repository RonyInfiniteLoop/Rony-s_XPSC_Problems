#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    ll l = 0, sum = 0, count = 0;

    for (ll r = 0; r < n; r++) 
    {
        sum += a[r]; 

        while (sum > s) 
        {
            sum -= a[l];
            l++;
        }

        // Count all subarrays ending at r
        count += (r - l + 1);//Only counts the length of the current segment and misses other valid subarrays.
    }

    cout << count << endl;
    return 0;
}
