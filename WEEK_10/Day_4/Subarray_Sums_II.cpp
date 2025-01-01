#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, x;
    cin>>n>>x;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    map<ll,ll>prefix;
    ll cur_sum=0, cnt=0;

    prefix[0] = 1;
    for(int i=0; i<n; i++)
    {
        cur_sum+=v[i];
        if(prefix.find(cur_sum-x)!=prefix.end())
        {
            cnt += prefix[cur_sum-x];
        }
        prefix[cur_sum]++;
    }
    cout<<cnt<<endl;

    
    return 0;
}