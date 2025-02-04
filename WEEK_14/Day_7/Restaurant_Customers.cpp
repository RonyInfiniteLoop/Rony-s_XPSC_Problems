#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() 
{
    int n;
    cin >> n;
    
    vector<pair<int, int>> events;
    
    for (int i = 0; i < n; i++) 
    {
        int a, b;
        cin >> a >> b;
        events.emplace_back(a, 1);  
        events.emplace_back(b, -1);
    }
    
    sort(events.begin(), events.end());
    
    int maxCustomers = 0, currentCustomers = 0;
    
    for (auto [time, type] : events) 
    {
        currentCustomers += type;
        maxCustomers = max(maxCustomers, currentCustomers);
    }
    
    cout << maxCustomers << endl;
    
    return 0;
}
