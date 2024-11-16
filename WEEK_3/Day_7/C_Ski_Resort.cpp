#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll count_valid_subarrays(ll len, ll k) 
{
    if (len < k) return 0;
    ll valid_length = len - k + 1;
    return valid_length * (valid_length + 1) / 2;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        
        ll result = 0;
        ll segment_length = 0;
        
        for (ll i = 0; i < n; i++) 
        {
            if (a[i] <= q) 
            {
                segment_length++;
            } 
            else 
            {
                // Calculate valid subarrays for the current segment
                result += count_valid_subarrays(segment_length, k);
                segment_length = 0;
            }
        }
        
        // Handle the last segment
        result += count_valid_subarrays(segment_length, k);
        
        cout << result << endl;
    }
    
    return 0;
}
