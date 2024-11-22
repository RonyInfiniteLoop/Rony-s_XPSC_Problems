#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char get(int i) {
    return 'a' + i - 1;
}

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
        string s;
        cin >> s;

        string ans = "";
        for (int i = n - 1; i >= 0; --i) 
        {
            if (s[i] != '0') 
            {
                ans += get(s[i] - '0');
            } 
            else 
            {
                int num = stoi(s.substr(i - 2, 2));
                ans += get(num);
                i -= 2; 
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
