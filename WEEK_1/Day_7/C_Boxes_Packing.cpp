#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<long long, int> freq;
    for (int i = 0; i < n; i++) 
    {
        long long x;
        cin >> x;
        freq[x]++;
    }

    // Find the maximum frequency among all sizes
    int max_frequency = 0;
    for (auto [size, count] : freq) 
    {
        max_frequency = max(max_frequency, count);
    }

    cout << max_frequency << endl;
    
    return 0;
}
