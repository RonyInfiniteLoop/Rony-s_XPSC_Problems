#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string block = "";
        for (int i = 0; i < k; i++)
        {
            block.push_back('a' + i);
        }

        string ans = "";
        for (int i = 0; i < n; i++){
            ans += block;
        }
        cout << ans << "\n";
    }
    
    return 0;
}