#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,product;
    cin>>n>>product;
    vector<ll>time(n);
    for(ll i=0; i<n; i++) cin>>time[i];

    auto ok = [&](ll seconds)
    {
        ll cnt  = 0;
        for(ll i=0; i<n; i++)
        {
            cnt += (seconds/time[i]);
            if(cnt >= product) return true;
        }
        return false;
    };
    
    ll l = 0, r= *max_element(time.begin(), time.end())*product, mid, minimum_time_required;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(ok(mid))
        {
            minimum_time_required = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout<<minimum_time_required<<endl;
    
    return 0;
}