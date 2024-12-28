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
        /* This method will cause time limit exit*/
        // int max_gcd = 0;
        // for(int i=1; i<n; i++)
        // {
        //     for(int j=i+1; j<=n; j++)
        //     {
        //        int gcd = __gcd(i,j);
        //        max_gcd = max(gcd, max_gcd);
        //     }
        // }
        // cout<<max_gcd<<endl;
        cout<<n/2<<endl;
    }
    
    return 0;
}