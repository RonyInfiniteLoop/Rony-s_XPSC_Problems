#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        string result;
        while (n > 0) 
        {
            for (auto& [ch, count] : freq) 
            {
                if (count > 0) 
                {
                    result += ch;
                    count--;
                    n--;
                }
            }
        }

        cout << result << "\n";
    }

    return 0;
}
