#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

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
        ll sum = 0;
        int cnt1 =0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i]; sum += v[i]; if(v[i] == 1) cnt1++;
        } 

        if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(sum < cnt1+n)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }
    
    return 0;
}