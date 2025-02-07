#include <bits/stdc++.h>
using namespace std;
#define int long long  

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> l(m + 1), r(m + 1), d(m + 1);
    for (int i = 1; i <= m; i++) 
    {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<int> op_count(m + 2, 0);
    for (int i = 0; i < k; i++) 
    {
        int x, y;
        cin >> x >> y;
        op_count[x]++;
        op_count[y + 1]--;
    }

    for (int i = 1; i <= m; i++) 
    {
        op_count[i] += op_count[i - 1];
    }

    vector<int> delta(n + 2, 0);
    for (int i = 1; i <= m; i++) 
    {
        int times = op_count[i];
        delta[l[i]] += d[i] * times;
        delta[r[i] + 1] -= d[i] * times;
    }

    for (int i = 1; i <= n; i++) {
        delta[i] += delta[i - 1];
        a[i] += delta[i];
    }

    for (int i = 1; i <= n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
