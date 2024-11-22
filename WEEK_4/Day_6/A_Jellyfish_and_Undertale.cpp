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
        ll a , b, n;
        cin>>a>>b>>n;

        ll total_time = b;

        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            total_time += min(a-1,x);

        }
        cout<<total_time<<endl;
    }
    
    return 0;
}