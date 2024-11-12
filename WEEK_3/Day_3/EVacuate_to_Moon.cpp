#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        vector<ll>energy(n);
        vector<ll>powers(m);
        for(int i=0; i<n; i++)
        {
            cin>>energy[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>powers[i];
        }
        sort(energy.begin(),energy.end(),greater<ll>());
        sort(powers.begin(),powers.end(),greater<ll>());
        ll max_energy = 0;
        int x = min(n,m);
        for(int i=0; i<x; i++)
        {
            ll y = powers[i]*h;
            if(y > energy[i]) max_energy+=energy[i];
            else max_energy += y;
        }
        cout<<max_energy<<endl;

    }
    
    return 0;
}