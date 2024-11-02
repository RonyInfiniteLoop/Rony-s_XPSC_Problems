#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) 
    {
        string s;
        getline(cin, s); 
        vector<char> result;       
        stack<int> upperPos;       
        stack<int> lowerPos;       
        vector<bool> toSkip(s.size(), false);

        for (int i = 0; i < s.size(); i++) 
        {
            char c = s[i];
            if (c == 'b') 
            {
                if (!lowerPos.empty()) 
                {
                    toSkip[lowerPos.top()] = true;
                    lowerPos.pop();
                }
            } 
            else if (c == 'B') 
            {
                
                if (!upperPos.empty()) 
                {
                    toSkip[upperPos.top()] = true;
                    upperPos.pop();
                }
            } 
            else 
            {
                
                result.push_back(c);
                if (islower(c)) 
                {
                    lowerPos.push(result.size() - 1);
                } 
                else if (isupper(c)) 
                {
                    upperPos.push(result.size() - 1);
                }
            }
        }

        for (int i = 0; i < result.size(); i++) 
        {
            if (!toSkip[i]) 
            {
                cout << result[i];
            }
        }
        cout << '\n'; 
    }

    return 0;
}
