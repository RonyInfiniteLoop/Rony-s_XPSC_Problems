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
        map<ll,int>mp;
        for(int i=0; i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        int mx  = 0;
        for(auto[x,y] : mp)
        {
            mx = max(mx,y);
        }
        int op = 0;
        while(mx < n)
        {
            int d = min(n-mx, mx);
            op+=1+d;
            mx+=d;
        }
        cout<<op<<endl;
    }
    
    return 0;
}