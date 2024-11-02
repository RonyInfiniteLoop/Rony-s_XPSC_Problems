#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore(); 

    vector<string> S;

    while (t--)
    {
        string x;
        getline(cin, x);

        if (find(S.begin(), S.end(), x) != S.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            S.push_back(x);
        }
    }

    return 0;
}
