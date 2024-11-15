#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0;
    ll pairs = 0;

    while (i < n && j < m) 
    {
        if (a[i] == b[j]) 
        {
            int count_a = 0, count_b = 0;
            int current_a = a[i], current_b = b[j];

            while (i < n && a[i] == current_a) 
            {
                count_a++;
                i++;
            }
            while (j < m && b[j] == current_b) 
            {
                count_b++;
                j++;
            }

            pairs += (ll)count_a * count_b;
        } 
        else if (a[i] < b[j]) 
        {
            i++;
        } 
        else 
        {
            j++;
        }
    }

    cout << pairs << endl;

    return 0;
}
