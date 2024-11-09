#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    set<int> b;

    
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
        cnt[a[i]]++;     // Count frequency of each size
        b.insert(a[i]);   // Add size s to the set
        b.insert(a[i] + 1); // Add consecutive size s + 1 to the set
    }

    int last = 0;  // The frequency of the previous size
    int res = 0;   // To store the result, number of sets required

    for (auto x: b) 
    {
        int c = cnt[x];  
        res += max(0, c - last); // If more dolls than the previous size, we open new sets
        last = c; 
    }

    cout << res << '\n';  
}

int main() 
{
    int t;
    cin >> t;  
    for (int i = 0; i < t; ++i) 
    {
        solve();  
    }
    return 0;
}
