#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() 
{
    int n, a, b, t;
    cin >> t; 

    while (t--) 
    {
        cin >> n >> a >> b;

        if ((a <= n / 2 && b >= n / 2 + 1) || (a == n / 2 + 1 && b == n / 2)) 
        {
            cout << a << " ";
            
            for (int i = n; i >= 1; i--) 
            {
                if (i != a && i != b) 
                {
                    cout << i << " ";
                }
            }
            cout << b;
        } 
        else 
        {
            cout << -1; 
        }
        cout << endl;
    }

    return 0;
}
