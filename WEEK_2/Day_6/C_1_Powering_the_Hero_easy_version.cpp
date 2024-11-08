#include <bits/stdc++.h>
using namespace std;
using ll = long long;  

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; 
    while(t--)
    {
        int n;
        cin >> n;  
        vector<int> deck(n);
        
        for(int i = 0; i < n; i++)
        {
            cin >> deck[i]; 
        }
        
        priority_queue<int> bonus_deck;
        ll max_power = 0;  

        for(int i = 0; i < n; i++)
        {
            if (deck[i] == 0) 
            {
                if (!bonus_deck.empty())
                {
                    max_power += bonus_deck.top();  
                    bonus_deck.pop();  
                }
            }
            else  
            {
                bonus_deck.push(deck[i]); 
            }
        }
        
        cout << max_power << '\n'; 
    }
    
    return 0;
}
