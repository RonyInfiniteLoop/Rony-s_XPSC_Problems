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
        int n,m;
        cin>>n>>m;
        if(n < m)
        {
            cout<<"No"<<endl;
            continue;
        }
        if((n-m)%2 != 0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    
    return 0;
}