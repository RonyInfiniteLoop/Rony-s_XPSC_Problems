#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    priority_queue<pair<int,int>>q;
    int n;
    cin>>n;
    map<ll,ll>v;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v[x]++;
    }
    for(auto[x,y] : v)
    {
        q.push({y,x});
    }
    int sz = n;
    while(q.size() >= 2)
    {
        auto[cnt1,x1] = q.top();
        q.pop();
        auto[cnt2,x2] = q.top();
        q.pop();
        cnt1--;
        cnt2--;
        sz-=2;
        if(cnt1){
            q.push({cnt1,x1});
        }
        if(cnt2)
        {
            q.push({cnt2,x2});
        }
    }
    cout<<sz<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}