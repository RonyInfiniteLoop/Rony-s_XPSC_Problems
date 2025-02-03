#include <bits/stdc++.h>
using namespace std;
#define int long long

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> freq(n + 1, 0);

    
    for (int i = 0; i < q; i++) 
    {
        int l, r;
        cin >> l >> r;
        freq[l - 1]++; 
        freq[r]--;
    }

    for (int i = 1; i < n; i++) 
    {
        freq[i] += freq[i - 1];
    }
    freq.pop_back(); 

    sort(a.rbegin(), a.rend());
    sort(freq.rbegin(), freq.rend());

    int max_sum = 0;
    for (int i = 0; i < n; i++) 
    {
        max_sum += a[i] * freq[i];
    }

    cout << max_sum << "\n";
    return 0;
}
