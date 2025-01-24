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
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }

        int max_diff = a[n-1] - a[0];

        for (int i = 0; i < n - 1; ++i) 
        {
            max_diff = max(max_diff, a[i] - a[0]); 
            max_diff = max(max_diff, a[n-1] - a[i+1]); 
        }

        for (int i = 0; i < n; ++i) 
        {
            max_diff = max(max_diff, a[i] - a[(i+1) % n]);
        }

        cout << max_diff << "\n";
    }
    return 0;
}
