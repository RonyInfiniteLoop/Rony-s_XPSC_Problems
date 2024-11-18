#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int X, Y;
        cin >> X >> Y;

        // Calculate maximum wins for both teams
        int max_wins_A = X / 3;
        int max_wins_B = Y / 3;

        // Calculate remaining points after maximizing wins
        int remaining_A = X - (max_wins_A * 3);
        int remaining_B = Y - (max_wins_B * 3);

        // Minimum draws required
        int min_draws = max(remaining_A, remaining_B);

        cout << min_draws << endl;
    }

    return 0;
}
