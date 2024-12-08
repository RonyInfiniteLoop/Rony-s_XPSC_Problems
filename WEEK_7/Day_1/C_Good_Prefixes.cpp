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
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        ll sum = 0;
        int cnt= 0;
        ll mx = 0;

        for(int i=0; i<n; i++)
        {
            sum += v[i];
            mx = max(mx, v[i]);
            if(sum - mx == mx) cnt++;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}