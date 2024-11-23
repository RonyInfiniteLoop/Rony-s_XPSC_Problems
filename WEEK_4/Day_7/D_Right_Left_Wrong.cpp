#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() 
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1, 0);
 
    for (int i = 1; i <= n; i++) 
    {
        int x;
        cin >> x;
        a[i] = a[i - 1] + x;
    }
    
    string s;
    cin >> s;
    
    ll ans = 0;
    int l = 0, r = n - 1;

    while (r > l) 
    {
        // Skip 'R' from the left side
        while (l < n && s[l] == 'R') {
            l++;
        }
        
        // Skip 'L' from the right side
        while (r >= 0 && s[r] == 'L') {
            r--;
        }
        
        // If valid indices are found, calculate the score
        if (l < r) 
        {
            ans += a[r + 1] - a[l];
            l++;
            r--;
        }
    }
    
    cout << ans << endl;
}

int main() 
{
    int t;
    cin >> t;
    
    // Process each test case
    for (int i = 0; i < t; i++) 
    {
        solve();
    }
    
    return 0;
}
