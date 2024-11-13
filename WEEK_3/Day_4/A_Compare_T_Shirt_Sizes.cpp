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
        string a, b;
        cin >> a >> b;

        char sa = a.back();  
        char sb = b.back();  
        int len_a = a.size(); 
        int len_b = b.size(); 

        
        if (sa != sb) 
        {
            cout << (sa < sb ? ">" : "<") << endl;
        }
        else 
        {
            if (len_a == len_b) 
            {
                cout << "=" << endl;
            }
            else if (sa == 'S') 
            {
                // For 'S' sizes, more 'X' means smaller
                cout << (len_a > len_b ? "<" : ">") << endl;
            }
            else if (sa == 'L') {
                // For 'L' sizes, more 'X' means larger
                cout << (len_a > len_b ? ">" : "<") << endl;
            }
        }
    }
    
    return 0;
}
