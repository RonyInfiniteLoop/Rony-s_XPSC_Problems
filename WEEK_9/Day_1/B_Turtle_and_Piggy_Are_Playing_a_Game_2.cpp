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
        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.rbegin(), v.rend());

        cout<<v[(n-1)/2]<<endl;
    }
    
    return 0;
}