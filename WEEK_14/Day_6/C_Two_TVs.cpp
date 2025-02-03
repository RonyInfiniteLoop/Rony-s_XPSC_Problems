#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() 
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> shows(n);
    for (int i = 0; i < n; i++) {
        cin >> shows[i].first >> shows[i].second;
    }

    sort(shows.begin(), shows.end());

    int tv1 = -1, tv2 = -1;

    for (auto show : shows) 
    {
        int start = show.first, end = show.second;

        if (start > tv1) {
            tv1 = end;
        } else if (start > tv2) {
            tv2 = end; 
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n"; 
    return 0;
}
