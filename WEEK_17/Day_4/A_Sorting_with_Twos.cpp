#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

bool isPowerOfTwo(int x) {
    return (x & (x - 1)) == 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        bool possible = true;
        
        for(int i = 0; i < n - 1; i++)
        {
            if(!isPowerOfTwo(i + 1)) 
            {
                if(a[i] > a[i+1])
                {
                    possible = false;
                    break;
                }
            }
        }
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    
    return 0;
}