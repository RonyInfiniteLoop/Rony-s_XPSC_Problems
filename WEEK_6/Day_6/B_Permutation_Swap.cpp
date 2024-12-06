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
        int max_k = 0;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            max_k = gcd(max_k, abs(x-i));
        }
        cout<<max_k<<endl;
    }
    
    return 0;
}