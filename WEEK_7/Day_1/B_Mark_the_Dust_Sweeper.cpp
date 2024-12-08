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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int first_non_zero = 0;
        while(first_non_zero<n && v[first_non_zero]==0)
        {
            first_non_zero++;
        }
        ll sum  = 0;
        int cnt0 = 0;
        for(int i=first_non_zero; i<n-1; i++)
        {
            sum+=v[i];
            if(v[i] == 0) cnt0++;
        }
        cout<<sum+cnt0<<endl;
    }
    
    return 0;
}