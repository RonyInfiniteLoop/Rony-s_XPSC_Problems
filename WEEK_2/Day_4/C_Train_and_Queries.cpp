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
        int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        map<ll, int> first_index; // To store the first index of each station
        map<ll, int> last_index; // To store the last index of each station

        // Read the stations and record the first and last occurrence
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
            if (first_index.find(v[i]) == first_index.end()) // if the v[i] if not found in map first_index than update the first index of element v[i]
            {
                first_index[v[i]] = i; 
            }
            last_index[v[i]] = i; 
        }
        
        while (q--) 
        {
            ll a, b;
            cin >> a >> b;

            // Check if both stations exist in the route
            if (first_index.count(a) && last_index.count(b)) 
            {
                int index_a = first_index[a]; 
                int index_b = last_index[b];   
                
               
                if (index_a < index_b) // Travel from a to b is possible
                {
                    cout << "YES\n";
                } 
                else 
                {
                    cout << "NO\n"; // Travel is not possible
                }
            } 
            else 
            {
                cout << "NO\n"; // If either station is not found
            }
        }
    }
    
    return 0;
}
