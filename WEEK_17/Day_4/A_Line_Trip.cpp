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
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> stations(n);
        for (int i = 0; i < n; i++){
            cin >> stations[i];
        }
        
        int required = stations[0];
        
        for (int i = 1; i < n; i++){
            required = max(required, stations[i] - stations[i-1]);
        }

        required = max(required, 2 * (x - stations[n-1]));
        
        cout << required << "\n";
    }
    
    return 0;
}