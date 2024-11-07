#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> p(n);
    string s;
    for (int i = 0; i < n; i++) 
    {
        cin >> p[i];
    }
    cin >> s;

    // Step 1: Collect all the disliked and liked songs along with their indices
    vector<tuple<int, int, int>> disliked, liked;

    for (int i = 0; i < n; i++) 
    {
        if (s[i] == '0') 
        {
            disliked.push_back({p[i], i, 0}); // (rating, index, type)
        } 
        else {
            liked.push_back({p[i], i, 1});
        }
    }

    // Step 2: Sort disliked and liked songs by their original ratings (p[i])
    sort(disliked.begin(), disliked.end());
    sort(liked.begin(), liked.end());

    // Step 3: Assign new ratings to disliked songs
    vector<int> q(n);
    int current_rating = 1;
    for (auto &[rating, index, type] : disliked) {
        q[index] = current_rating++;
    }

    // Step 4: Assign new ratings to liked songs
    for (auto &[rating, index, type] : liked) 
    {
        q[index] = current_rating++;
    }

    // Step 5: Output the result
    for (int i = 0; i < n; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
