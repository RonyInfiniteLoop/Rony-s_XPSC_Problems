#include <bits/stdc++.h>
using namespace std;

int search(string pat, string txt) 
{
    int n = txt.size(), m = pat.size();

    vector<int> freq_pat(26, 0), freq_window(26, 0);
    int count = 0;

    for (char c : pat) 
    {
        freq_pat[c - 'a']++;
    }

    for (int i = 0; i < m; i++) 
    {
        freq_window[txt[i] - 'a']++;
    }

    if (freq_window == freq_pat) 
    {
        count++;
    }

    // Slide the window
    for (int i = m; i < n; i++) 
    {
        // Add the new character
        freq_window[txt[i] - 'a']++;
        // Remove the old character
        freq_window[txt[i - m] - 'a']--;

        // Compare frequencies
        if (freq_window == freq_pat) {
            count++;
        }
    }

    return count;
}

int main() {
    string txt = "forxxorfxdofr";
    string pat = "for";
    cout << search(pat, txt) << "\n";

    txt = "aabaabaa";
    pat = "aaba";
    cout << search(pat, txt) << "\n";

    return 0;
}
