#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> messages(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> messages[i];
    }

    set<string> seen;
    vector<string> result;

    for (int i = n - 1; i >= 0; --i) 
    {
        string friend_name = messages[i];
        if (seen.find(friend_name) == seen.end()) 
        {
            result.push_back(friend_name);
            seen.insert(friend_name);
        }
    }

    for (int i = 0; i < result.size(); i++) 
    {
        cout << result[i] << '\n';
    }

    return 0;
}
