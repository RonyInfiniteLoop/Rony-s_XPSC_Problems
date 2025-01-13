#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int ans = 0;
        for (int k = 1; k <= n; ++k) 
        {
            multiset<int> s(a.begin(), a.end());
            bool valid = true;

            for (int i = 0; i < k; ++i) 
            {
                
                auto it = s.upper_bound(k - i);
                if (it == s.begin()) 
                { // No valid element for Alice to remove
                    valid = false;
                    break;
                }
                --it; // Move to the valid element
                s.erase(it); // Alice removes the element

                if (!s.empty()) 
                {
                    // Bob increments the smallest remaining element
                    int x = *s.begin();
                    s.erase(s.begin());
                    s.insert(x + k - i);
                }
            }

            // Check if the game is valid for this k
            if (valid) ans = k;
        }

        cout << ans << '\n';
    }
}
