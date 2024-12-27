#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll l, r;
    cin>>l>>r;

    cout<<"YES"<<endl;
    for(ll i=l; i<=r; i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
    
    return 0;
}