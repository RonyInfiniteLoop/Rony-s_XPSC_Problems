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
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        
        if(c[0] == c[n-1])
        {
            int cnt = 0;
            for (int i = 1; i < n-1; i++)
            {
                if(c[i] == c[0]) cnt++;
            }
            if(cnt >= k - 2)
            {
                cout << "YES\n";
            } 
            else {
                cout << "NO\n";
            }
        } 
        else 
        {
            int need = k; 
            int leftCount = 0, rightCount = 0;
            int left = 0, right = n - 1;
            
            while(left < n && leftCount < need)
            {
                if(c[left] == c[0]) leftCount++;
                left++;
            }
            
            while(right >= 0 && rightCount < need)
            {
                if(c[right] == c[n-1]) rightCount++;
                right--;
            }
            
            if(left <= right + 1 && leftCount == need && rightCount == need)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
