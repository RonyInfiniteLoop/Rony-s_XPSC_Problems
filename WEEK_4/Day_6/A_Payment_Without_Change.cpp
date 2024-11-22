#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin>>q;
    while(q--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll ans = (a*n+b);

        if(s%n<=b &&ans>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}