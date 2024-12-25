#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isprime(ll n)
{
    if(n<2) return false;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n;
    if(isprime(n))
    {
        cout<<1<<endl;
    }
    else if((n%2==0) || isprime(n-2))
    {
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
    
    return 0;
}