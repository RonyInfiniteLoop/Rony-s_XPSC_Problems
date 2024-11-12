#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    vector<string> v(t);
    string ans = "";
    
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    
    set<string> seen;  
    
    for (int i = t - 1; i >= 0; i--)
    {
        string str = v[i];
        
        if (seen.find(str) == seen.end())
        {
            if (str.size() >= 2) {
                ans += str[str.size() - 2];  
                ans += str[str.size() - 1];  
            }
            seen.insert(str);  
        }
    }
    
    cout << ans << endl;
    return 0;
}
