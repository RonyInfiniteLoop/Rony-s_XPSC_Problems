#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int win, draw, loss;
    cin >> win >> draw >> loss;

    int game_remaining = 4 - (win + draw + loss);

    double my_team_points = win + 0.5 * draw + game_remaining;
    double opponent_points = 0.5 * draw + loss;

    if (my_team_points > opponent_points) 
    {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
