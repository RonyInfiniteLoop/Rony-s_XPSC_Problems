#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        int sz = (n * n);
        vector<int> v(sz);
        int l = 1, r = sz;
        int i = 0;
        
        while(l <= r)
        {
            if((i + 1) % 2 != 0)
            {
                v[i] = r;
                r--;
            }
            else {
                v[i] = l;
                l++;
            }
            i++;
        }

        
        int idx = 0;
        vector<vector<int>> ans(n, vector<int>(n));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                ans[i][j] = v[idx];
                idx++;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << ans[i][j] << " ";
                }
            }
            else 
            {
                for(int j = n - 1; j >= 0; j--)
                {
                    cout << ans[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}
