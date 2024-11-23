#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) 
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        int sum = 0;
    
        for(int i = 0; i < n; i++) 
        {
            cin >> v[i];
            sum += v[i];
        }
        
        if(s == sum) {
            cout << 0 << endl;
            continue;
        }
        else if(sum < s) {
            cout << -1 << endl;
            continue;
        }
        
        int left = 0, right = 0;
        int min_operations = INT_MAX;
        int current_sum = 0;
        
        while (right < n) 
        {
            current_sum += v[right];
            
            while (current_sum > s) {
                current_sum -= v[left];
                left++;
            }
            if (current_sum == s) 
            {
                min_operations = min(min_operations, n - (right - left + 1));
            }
            right++;  
        }
    
        if(min_operations == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << min_operations << endl;
        }
    }
    
    return 0;
}
