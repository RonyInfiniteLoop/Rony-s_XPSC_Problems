#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    ll red = n/a;
    ll blue = n/b;
    ll overlap = n/lcm(a,b);

    ll totalchoclate = p*red + q*blue - overlap*min(p,q);
    cout<<totalchoclate<<endl;
    
    return 0;
}