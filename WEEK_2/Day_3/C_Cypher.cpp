#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> wheels(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> wheels[i];
        }
        vector<pair<int, string>> p(n);
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            p[i] = {x, s};
        }

        for (int i = 0; i < n; i++) 
        {
            int x = p[i].first;
            string s = p[i].second;
            for (char ch : s) 
            {
                if (ch == 'D' && wheels[i]==9) 
                {
                    wheels[i] = 0;
                } 
                else if (ch == 'D') 
                {
                    wheels[i] +=1;
                } 
                else if (ch == 'U' && wheels[i]==0) 
                {
                    wheels[i] = 9;  
                }
                else if (ch == 'U') 
                {
                    wheels[i] -=1;
                } 
            }
        }

      
        for (int i = 0; i < n; i++) 
        {
            cout << wheels[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
