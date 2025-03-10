#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<long long> seg(2 * n);
    for (int i = 0; i < n; i++) 
    {
        cin >> seg[n + i]; 
    }
    
    for (int i = n - 1; i > 0; i--)
        seg[i] = seg[2 * i] + seg[2 * i + 1];
    
    while (m--) 
    {
        int type;
        cin >> type;
        if (type == 1) 
        {
            int i, v;
            cin >> i >> v;
            i += n;
            seg[i] = v;
            for (i /= 2; i > 0; i /= 2)
                seg[i] = seg[2 * i] + seg[2 * i + 1];
        } 
        else if (type == 2) 
        {
            int l, r;
            cin >> l >> r;
            long long sum = 0;
            l += n; r += n;
            while (l < r) 
            {
                if (l & 1) 
                {
                    sum += seg[l];
                    l++;
                }
                if (r & 1) 
                { 
                    r--;
                    sum += seg[r];
                }
                l /= 2;
                r /= 2;
            }
            cout << sum << "\n";
        }
    }
    
    return 0;
}
