#include<bits/stdc++.h>
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

        // Input prefix sums for the last k terms
        vector<ll> s(n + 1, 0);
        for (int i = n - k + 1; i <= n; i++) 
        {
            cin >> s[i];
        }

        // If there's only one element or one prefix sum, it's always possible
        if (n == 1 || k == 1) {
            cout << "Yes\n";
            continue;
        }

        // Calculate differences (a[i])
        vector<ll> a(n + 1, 0);
        for (int i = n; i >= n - k + 2; i--) {
            a[i] = s[i] - s[i - 1];
        }

        // Check if `a[i]` is non-decreasing for the known range
        bool possible = true;
        for (int i = n - k + 2; i <= n; i++) {
            if (i + 1 <= n && a[i + 1] < a[i]) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << "No\n";
            continue;
        }

        // Back-propagate `a[i]` for earlier elements
        for (int i = n - k + 1; i > 1; i--) {
            a[i] = a[i + 1];
            s[i - 1] = s[i] - a[i];
        }
        a[1] = s[1]; // Assign the first value of the sequence

        // Final check for the entire sequence
        for (int i = 1; i <= n; i++) {
            if (i + 1 <= n && a[i + 1] < a[i]) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "Yes\n" : "No\n");
    }

    return 0;
}
