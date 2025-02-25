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
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;
        
        int extra = 0, missing = 0;
        for (int i = 0; i < n; i++) 
        {

            if (s[i] == '1' && f[i] == '0') {
                extra++;
            }

            else if (s[i] == '0' && f[i] == '1') {
                missing++;
            }
        }
       
        cout << max(extra, missing) << "\n";
    }
    return 0;
}