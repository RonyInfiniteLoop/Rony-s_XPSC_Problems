#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

void solve() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> p(n), q(n);
        for (int i = 0; i < n; ++i) cin >> p[i];
        
        if (n == 1) 
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; ++i) q[i] = i + 1;

        for (int i = 0; i < n - 1; ++i) 
        {
            if (q[i] == p[i]) swap(q[i], q[i + 1]);
        }

        if (q[n - 1] == p[n - 1]) swap(q[n - 1], q[n - 2]);

        bool valid = true;
        for (int i = 0; i < n; ++i) 
        {
            if (q[i] == p[i]) valid = false;
        }

        if (valid) 
        {
            for (int x : q) cout << x << " ";
            cout << "\n";
        } 
        else {
            cout << "-1\n";
        }
    }
}
int main() 
{
    solve();
    return 0;
}
