#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    int longestKSubstr(string &s, int k) {

        map<char, int> cnt;
        int l = 0, n = s.size(), r = 0, ans = -1;

        while (r < n) {
            cnt[s[r]]++;
            if (cnt.size() == k) {
                ans = max(ans, r - l + 1);
            }
            while (cnt.size() > k) {
                cnt[s[l]]--;
                if (cnt[s[l]] == 0) {
                    cnt.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
    return 0;
}

