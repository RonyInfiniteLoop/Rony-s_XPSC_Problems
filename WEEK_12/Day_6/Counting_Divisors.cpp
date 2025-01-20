#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

const ll maxN = 1e6;
vector<ll>divisors(maxN+1,0);

void precompute_divisor(){
    for(ll i=1; i<=maxN; i++)
    {
        for(ll j=i; j<=maxN; j+=i)
        {
            divisors[j]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    precompute_divisor();
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<divisors[n]<<endl;
    }
    
    return 0;
}