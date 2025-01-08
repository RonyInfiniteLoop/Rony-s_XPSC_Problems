#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll left = 1, right = k*2, result = 0;
        while(left <= right)
        {
            ll mid = (left+right)/2;
            ll nonDivisible = mid - mid/n;

            if(nonDivisible >=k)
            {
                result = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        cout<<result<<endl;    
    }
    
    return 0;
}