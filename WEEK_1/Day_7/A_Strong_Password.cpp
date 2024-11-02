#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string s;
    cin >> s;
    int n = s.size();
    int idx = -1;

    // Find the first occurrence of two consecutive identical characters
    for (int i = 0; i + 1 < n; i++) 
    {
        if (s[i] == s[i + 1]) {
            idx = i;
            break;
        }
    }

    // Case 1: No consecutive identical characters
    if (idx == -1) 
    {
        // Append a different character to the end of the string
        if (s.back() == 'a') 
            cout << s + "b" << endl;
        else 
            cout << s + "a" << endl;
    }
    // Case 2: Found consecutive identical characters
    else 
    {
        // Insert a different character between the identical characters
        char insert_char = (s[idx] == 'a') ? 'b' : 'a';
        cout << s.substr(0, idx + 1) + insert_char + s.substr(idx + 1) << endl;
    }
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
