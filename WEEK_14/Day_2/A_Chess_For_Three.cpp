#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) 
    {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        int sum = p1 + p2 + p3;
        if (sum % 2) 
        {
            cout << "-1\n";
            continue;
        }
        cout << (sum - max(0, p3 - p1 - p2)) / 2 << "\n";
    }
    return 0;
}
