#include <bits/stdc++.h>
using namespace std;
using ll =long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
 
        vector<int> evens;
        ll max_odd = -1;
 
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (a[i] % 2 == 0) 
            {
                evens.push_back(a[i]);
            } 
            else if (a[i] > max_odd) 
            {
                max_odd = a[i];
            }
        }
 
        sort(evens.begin(), evens.end());
 
        if (max_odd == -1 || evens.empty()) 
        {
            cout << 0 << "\n";
            continue;
        }
 
        int operations = evens.size();
        for (int t : evens) 
        {
            if (t < max_odd) 
            {
                max_odd += t;
            } 
            else {
                operations++;
                break;
            }
        }
 
        cout << operations << "\n";
    }
 
    return 0;
}