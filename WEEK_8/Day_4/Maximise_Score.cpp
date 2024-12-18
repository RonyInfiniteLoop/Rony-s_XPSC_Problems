#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while ((t--))
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int ans = INT_MAX;
        for(int i=0; i<n; i++)
        {
            int score = 0;
            if(i>0)
            {
                score = max(score, abs(v[i]-v[i-1]));
            }
            if(i<n-1)
            {
                score = max(score, abs(v[i]-v[i+1]));
            }
            ans = min(ans, score);
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}