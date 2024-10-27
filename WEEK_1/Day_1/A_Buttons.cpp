#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    // Calculate both cases
    int option1 = max(a, b) + (max(a, b) - 1);  // Press the larger button twice
    int option2 = a + b;                         // Press each button once

    // Output the maximum of the two options
    cout << max(option1, option2) << endl;

    return 0;
}
