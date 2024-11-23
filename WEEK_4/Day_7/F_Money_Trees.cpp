#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) 
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> fruits(n);
        vector<ll> heights(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> fruits[i];
        }

        for (int i = 0; i < n; i++) 
        {
            cin >> heights[i];
        }

        ll l = 0;
        long long current_fruit_sum = 0;
        ll max_length = 0;

        for (ll r = 0; r < n; r++) {
            current_fruit_sum += fruits[r];

            // Ensure divisibility condition: h[i] should be divisible by h[i+1]
            while (r > l && heights[r-1] % heights[r] != 0) 
            {
                current_fruit_sum -= fruits[l];
                l++;
            }

            // Shrink the window from the left if the fruit sum exceeds k
            while (current_fruit_sum > k) 
            {
                current_fruit_sum -= fruits[l];
                l++;
            }

            max_length = max(max_length, r - l + 1);
        }

        cout << max_length << endl;
    }

    return 0;
}
