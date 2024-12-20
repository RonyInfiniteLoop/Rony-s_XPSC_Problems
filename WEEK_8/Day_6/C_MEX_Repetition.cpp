#include<bits/stdc++.h>
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
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll sum = accumulate(v.begin(), v.end(), 0LL);
        ll mex = (n * (n + 1)) / 2 - sum;
        v.push_back(mex); 

        k = k % (n + 1);  

        // Use deque to perform the cyclic shift
        deque<ll> dq(v.begin(), v.end());
        while (k--) 
        {
            dq.push_front(dq.back()); 
            dq.pop_back();
        }

        for (ll i = 0; i < n ; i++) {
            cout << dq[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
