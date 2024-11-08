#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    int t;
    cin >> t; 
    
    while (t--) 
    {
        int n;
        cin >> n;  
        priority_queue<int> pq;

        for (int i = 1; i <= n; i++) {
            pq.push(i);
        }

        vector<pair<int, int>> operations;

        for (int i = 0; i < n - 1; i++) 
        {
            int a = pq.top(); 
            pq.pop();
            int b = pq.top(); 
            pq.pop();

            int newNumber = (a + b + 1) / 2;
            pq.push(newNumber);

            operations.push_back({a, b});
        }

        
        cout << pq.top() << endl;

        for (auto &op : operations) 
        {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}
