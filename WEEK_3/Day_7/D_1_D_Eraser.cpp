#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int solveTestCase() 
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int operations = 0;

    for (int i = 0; i < n; i++) 
    {
        if (s[i] == 'B') 
        {
            operations++;
            // Convert next k cells to white (or until the end of string)
            for (int j = i; j < min(i + k, n); j++) 
            {
                s[j] = 'W';
            }
        }
    }
     
    return operations;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cout << solveTestCase() << endl;
    }
    
    return 0;
}