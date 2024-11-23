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
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    ll l = 0, sum = 0, count = 0;

    for (ll r = 0; r < n; r++) 
    {
        sum += a[r];

        while (sum >= s) 
        {
            count += (n - r);
            sum -= a[l]; 
            l++;
        }
    }

    cout << count << endl;
    return 0;
}
