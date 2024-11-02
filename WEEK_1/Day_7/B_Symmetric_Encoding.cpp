#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while (t--) 
    {
        int n;
        cin >> n;
        cin.ignore(); // consume newline after integer input
        string s;
        getline(cin, s);

        // Collect unique characters and sort them to form `r`
        set<char> unique_chars(s.begin(), s.end());
        string r(unique_chars.begin(), unique_chars.end());

        // Create symmetric mapping
        map<char, char> sym;
        int len = r.size();
        for (int i = 0; i < len; i++) 
        {
            sym[r[i]] = r[len - 1 - i];
            sym[r[len - 1 - i]] = r[i];
        }

        // Decode the string `s` to get the original result
        string result = "";
        for (char c : s) 
        {
            result += sym[c];
        }

        cout << result << "\n";
    }

    return 0;
}
