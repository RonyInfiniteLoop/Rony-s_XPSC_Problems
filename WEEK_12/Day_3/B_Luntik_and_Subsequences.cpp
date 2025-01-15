#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() 
{
    int t; 
    cin >> t;

    while (t--) 
    {
        int n; 
        cin >> n;
        vector<int> a(n);

        int countZero = 0, countOne = 0;

        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
            if (a[i] == 0) countZero++;
            if (a[i] == 1) countOne++;
        }

        long long result = (1LL << countZero) * countOne; 
        cout << result << endl;
    }

    return 0;
}
