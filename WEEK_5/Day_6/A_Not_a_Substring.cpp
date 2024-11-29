#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin >> s;
        int n = s.size();
        
        string a, b;
        
        // Construct a: alternating '(' and ')'
        for (int i = 0; i < n; ++i) 
        {
            a += "()";
        }

        // Construct b: first n '(' followed by n ')'
        b += string(n, '(');
        b += string(n, ')');

        // Check if 's' is a substring of 'a' or 'b'
        if (a.find(s) == string::npos) 
        {
            cout << "YES\n" << a << '\n';  // If 's' not found in 'a', print 'a'
        } 
        else if (b.find(s) == string::npos) 
        {
            cout << "YES\n" << b << '\n';  // If 's' not found in 'b', print 'b'
        } 
        else 
        {
            cout << "NO\n";  // If 's' is found in both, print "NO"
        }
    }

    return 0;
}
