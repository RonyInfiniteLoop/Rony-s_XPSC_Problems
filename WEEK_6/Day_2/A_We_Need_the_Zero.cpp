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
        int XOR = 0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            XOR ^= v[i];
        }
        if(XOR == 0) cout<<0<<endl;
        else if(n%2 != 0) cout<<XOR<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}