#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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
        string line;
        cin >> line;

        ll initial_value = 0;
        vector<ll> gains;
        
        for (int i = 0; i < n; ++i) 
        {
            if (line[i] == 'L') 
            {
                initial_value += i;
                gains.push_back((n - i - 1) - i);  
            } 
            else 
            {  
                initial_value += (n - i - 1);  
                gains.push_back(i - (n - i - 1));  
            }
        }

        
        sort(gains.rbegin(), gains.rend());
        
        vector<ll> results(n);
        ll current_value = initial_value;
        for (int k = 0; k < n; ++k) 
        {
            if (gains[k] > 0) 
            {
                current_value += gains[k];
            }
            results[k] = current_value;
        }


        for (int k = 0; k < n; ++k) 
        {
            cout << results[k] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
