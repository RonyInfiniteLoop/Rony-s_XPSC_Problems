#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin >> s;

        int n = s.size();
        char first = s[0], last = s[n - 1];

        // Determine traversal direction
        bool ascending = first <= last;

        // Map to store indices of each character
        map<char, vector<int>> char_indices;
        for (int i = 0; i < n; i++) 
        {
            char_indices[s[i]].push_back(i);
        }

        // Collect indices based on the traversal direction
        vector<int> path;
        if (ascending) 
        {
            for (char c = first; c <= last; c++) 
            {
                if (char_indices.count(c)) // checks char c present or  not..
                {
                    path.insert(path.end(), char_indices[c].begin(), char_indices[c].end());
                }
            }
        } 
        else 
        {
            for (char c = first; c >= last; c--) 
            {
                if (char_indices.count(c)) {
                    path.insert(path.end(), char_indices[c].begin(), char_indices[c].end());
                }
            }
        }

        // Compute the cost
        int cost = 0;
        for (int i = 1; i < path.size(); i++) 
        {
            cost += abs(s[path[i]] - s[path[i - 1]]);
        }

        cout << cost << " " << path.size() << "\n";
        for (int i : path) 
        {
            cout << i + 1 << " "; // Convert to 1-based index
        }
        cout << "\n";
    }

    return 0;
}
