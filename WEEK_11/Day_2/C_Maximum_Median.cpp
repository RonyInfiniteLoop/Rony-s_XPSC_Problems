#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());

    ll l = arr[n/2], r = arr[n/2]+k, mid, result = l;

    auto can_acheive_Median = [&](ll mid)
    {
        ll operations = 0;
        for(ll i = n/2; i<n; i++)
        {
            if(arr[i] < mid)
            {
                operations += (mid - arr[i]);
                if(operations > k) return false;
            }
        }
        return operations <= k;
    };
    while(l<=r)
    {
        mid = (l+r)/2;
        if(can_acheive_Median(mid))
        {
            result = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout<< result << endl;
    
    return 0;
}