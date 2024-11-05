#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    // Vector to store the number of distinct elements from position i to n
    vector<int> distinct_count(n);
    set<int> seen_elements;
    int distinct = 0;

    // Traverse the array from the end to the beginning
    for (int i = n - 1; i >= 0; i--) 
    {
        if (seen_elements.find(a[i]) == seen_elements.end()) 
        {
            seen_elements.insert(a[i]);
            distinct++;
        }
        distinct_count[i] = distinct;
    }

    // Answer each query in O(1) by looking up precomputed distinct_count
    for (int j = 0; j < m; j++) 
    {
        int l;
        cin >> l;
        cout << distinct_count[l - 1] << endl;
    }

    return 0;
}
