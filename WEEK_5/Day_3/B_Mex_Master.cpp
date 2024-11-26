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
        vector<int>v(n);
        int cnt_0 = 0;
        bool f = false;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i] == 0) cnt_0++;
            else if(v[i] >= 2) f = true;
        }
        if(cnt_0 <= (n+1)/2) cout<<0<<endl;
        else if(f || cnt_0==n) cout<<1<<endl;
        else cout<<2<<endl;
    }
    
    return 0;
}