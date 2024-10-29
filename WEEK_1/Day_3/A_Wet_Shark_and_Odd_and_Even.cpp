#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> v(n);
    long long total_sum = 0;
    long long smallest_odd = LLONG_MAX;

    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
        total_sum += v[i];
        if (v[i] % 2 != 0) 
        {
            smallest_odd = min(smallest_odd, v[i]);
        }
    }

  
    if (total_sum % 2 == 0) 
    {
        cout << total_sum << endl;
    } 
    else 
    {
   
        cout << total_sum - smallest_odd << endl;
    }

    return 0;
}
