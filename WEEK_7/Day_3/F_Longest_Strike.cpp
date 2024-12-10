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
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        map<ll, ll> freq;

        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
            freq[v[i]]++;
        }

        vector<ll> ans;
        for (auto &entry : freq) 
        {
            if (entry.second >= k) 
            {
                ans.push_back(entry.first);
            }
        }

        if (ans.empty()) 
        {
            cout << -1 << endl;
            continue;
        }

        // Find the longest consecutive range
        sort(ans.begin(), ans.end());
        ll x = ans[0], y = ans[0], mx = 0, l = ans[0];

        for (int i = 1; i < ans.size(); i++) 
        {
            if (ans[i] - 1 == ans[i - 1]) 
            {
                // Extend the current range
                if (ans[i] - l > mx) 
                {
                    x = l;
                    y = ans[i];
                    mx = ans[i] - l;
                }
            } 
            else 
            {
                // Start a new range
                l = ans[i];
            }
        }

        cout << x << " " << y << endl;
    }

    return 0;
}
