#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m;

        // Case 1: Impossible if n > m
        if (n > m) {
            cout << "No\n";
            continue;
        }

        // Case 2: Impossible if n is even and m is odd
        if (n % 2 == 0 && m % 2 != 0) 
        {
            cout << "No\n";
            continue;
        }

        // Case 3: n is odd
        if (n % 2 == 1) 
        {
            cout << "Yes\n";
            for (int i = 0; i < n - 1; ++i) 
            {
                cout << 1 << " ";
            }
            cout << m - (n - 1) << "\n";
        } 
        else 
        {
            // Case 4: n is even and m is even
            cout << "Yes\n";
            for (int i = 0; i < n - 2; ++i) 
            {
                cout << 1 << " ";
            }
            int remaining = (m - (n - 2)) / 2;
            cout << remaining << " " << remaining << "\n";
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
