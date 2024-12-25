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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll gcdOdd = v[0], gcdEven = v[1];
        for (ll i = 2; i < n; i += 2)
        {
            gcdOdd = gcd(gcdOdd, v[i]);
        }
        for (ll i = 3; i < n; i += 2)
        {
            gcdEven = gcd(gcdEven, v[i]);
        }

        bool validOdd = true, validEven = true;
        for (ll i = 0; i < n; i += 2)
        {
            if (v[i] % gcdEven == 0)
            {
                validEven = false;
                break;
            }
        }
        for (ll i = 1; i < n; i += 2)
        {
            if (v[i] % gcdOdd == 0)
            {
                validOdd = false;
                break;
            }
        }

        if (validEven)
        {
            cout << gcdEven << endl;
        }
        else if (validOdd)
        {
            cout << gcdOdd << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
