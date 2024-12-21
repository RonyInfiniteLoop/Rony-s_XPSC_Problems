#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
    
        int cnt_1 = count(s.begin(), s.end(), '1');
        int cnt_0 = count(s.begin(), s.end(), '0');
        
        int t_length = 0;

        for (char c : s) 
        {
            if ((c == '0' && cnt_1 > 0) || (c == '1' && cnt_0 > 0)) 
            { 
                t_length++;
                if (c == '0') cnt_1--; 
                else cnt_0--; 
            } 
            else 
            {
                break; 
            }
        }

        cout << s.size() - t_length << endl;
    }

    return 0;
}
