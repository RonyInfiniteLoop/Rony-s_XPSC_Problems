#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int min_deletion = INT_MAX;
        bool possible = false;

        for(char c ='a'; c<='z'; c++)
        {
            int l =0, r = n-1; 
            int deletion = 0;
            bool cur_possible = true;
            while(l<r)
            {
                if(s[l] == s[r])
                {
                    l++; r--;
                }
                else if(s[l] == c)
                {
                    deletion++;
                    l++;
                }
                else if(s[r] == c)
                {
                    deletion++;
                    r--;
                }
                else{
                    cur_possible = false;
                    break;
                }
            }
            if(cur_possible) {
                possible = true;
                min_deletion = min(deletion, min_deletion);
            }
        }
        if(possible) cout<<min_deletion<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}